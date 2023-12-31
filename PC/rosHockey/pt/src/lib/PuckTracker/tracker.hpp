#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <stdio.h>
#include <ctime>
#include <chrono>
#include <fstream>
#include <iomanip>
#include <sstream>
#include "../savgol/savgol.hpp"
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string>
#include <string.h>
#define PORT  8080
#define IP "10.42.0.1"
#define CAMERA_STREAM_IP "10.42.0.1"
#define CAMERA_STREAM_PORT 5000
using namespace cv;
using namespace std;
using std::to_string;
#define LOST_CUT 3


// Both of these files should be calibrated manually
#define CORNERS_FILE "/home/fizzer/PucksInDeep/RPi/rosHockey/pt/calibration/calibrate.txt"
#define HSV_FILE "/home/fizzer/PucksInDeep/RPi/rosHockey/pt/calibration/HSV.txt"

class tracker {


    private:

        void get_offsets(float position[], float offsets[]);
        
        int lost_frames=LOST_CUT;
        const int lost_thresh = LOST_CUT; 

        // socket stuff
        int sockfd, portno, n;
        struct sockaddr_in serv_addr;
        struct hostent *server;

        void setup_socket(void);
        
        // Dimension constants
        const float TABLE_Y_DIMS = 192.7; // cm
        const float TABLE_X_DIMS = 92.7; // cm
        const float PUCK_RADIUS = 3; //cm
        const int FRAME_WIDTH = 640;
        const int FRAME_HEIGHT = 480;
        const float IMG_X_TO_CM = TABLE_X_DIMS/FRAME_HEIGHT;
        const float IMG_Y_TO_CM = TABLE_Y_DIMS/FRAME_WIDTH;

        // M00_cut was useful for tracking the puck, now we are doing only LED and it is unstable
        // const int M00_cut = 0.2 *3.1415*(0.1*0.1*TABLE_Y_DIMS*TABLE_X_DIMS/(FRAME_WIDTH*FRAME_HEIGHT));  
        const int M00_cut = 0;

        // Lens distortion calibration coefficients
        const float x_offset = 3.26;
        const float y_offset = 1.6;
        const float A = 8*x_offset/(TABLE_Y_DIMS*TABLE_Y_DIMS*TABLE_X_DIMS);
        const float B = 8*y_offset/(TABLE_Y_DIMS*TABLE_X_DIMS*TABLE_X_DIMS);

        Mat table_mask;

        // const float A = 0;
        // const float B = 0;

        SavitskyGolay savgol;
        // CV2 transform constants
        Point2f inQuad[4];
        Point2f outQuad[4];
        Scalar shift;
        bool shift_flag;
        Size transformSize = Size(FRAME_HEIGHT,FRAME_WIDTH);
        Mat transform_matrix;
       
        // HSV bounds
        Scalar lowerb;// = Scalar(45,45,155);
        Scalar upperb;// = Scalar(65+shift_int,65,175);

        Scalar lowerb1;// = Scalar(45,45,155);
        Scalar upperb1;// = Scalar(65+shift_int,65,175);


        // Frames 
        Mat transformed;
        Mat hsv;
        Mat bin;
        Mat bin1;
        Mat bin_send;
        Mat raw;

        Moments moms;
        VideoCapture cap;


        uint64_t us = std::chrono::duration_cast<std::chrono::microseconds>(
            std::chrono::high_resolution_clock::now().time_since_epoch())
            .count();
        String time = to_string(us);

        // make sure to create this folder, will not upload to git
        String output_file = "/home/fizzer/PucksInDeep/RPi/rosHockey/pt/videos/";

        const String file = output_file + time + ".avi";
        // cout << file;
        VideoWriter video = VideoWriter(file, VideoWriter::fourcc('M','J','P','G'), 10, Size(FRAME_WIDTH, FRAME_HEIGHT));

    public:

        float x = -1;
        float y = -1 ;
        float vx = 0;
        float vy = 0;

        void tracker_write(void);
        tracker(void){
            
            char stream_commad[256];
            bzero(stream_commad,256);
            sprintf(stream_commad, "udp://%s:%d?overrun_nonfatal=1&fifo_size=50000000", CAMERA_STREAM_IP, CAMERA_STREAM_PORT);
            
    
            savgol = SavitskyGolay();
            // setup_socket();
            outQuad[0] = Point2f(0,0);
            outQuad[1] = Point2f(0,FRAME_WIDTH);
            outQuad[2] = Point2f(FRAME_HEIGHT,FRAME_WIDTH);
            outQuad[3] = Point2f(FRAME_HEIGHT,0);

            // READ FILES 
            fstream cornerfile(CORNERS_FILE, ios_base::in);
            for (int i = 0; i<4; i++){
                int x=-1;
                int y=-1;
                if ((!(cornerfile >> x)) ||  (!(cornerfile >> y))){
                    cerr << "Error reading " << CORNERS_FILE << '\n';
                    exit(1);
                }
                inQuad[i] = Point2f(x,y);
            }


            transform_matrix = getPerspectiveTransform(inQuad, outQuad);


            fstream hsvfile(HSV_FILE, ios_base::in);
            int bounds[2][3];
            for (int i = 0; i<2; i++){
                int val=0;
                for (int j= 0 ; j < 3; j ++){
                    if (!(hsvfile >> val)){
                        cerr << "Error reading " << HSV_FILE << '\n';
                        exit(1);
                    }
                    bounds[i][j] = val;
                }
            }

            //Allows the HSV filter to work for red
            // IE H = [160, 20]
            if (bounds[0][0]>bounds[1][0]){
                lowerb = Scalar(bounds[0][0],bounds[0][1], bounds[0][2]);
                upperb = Scalar(180,bounds[1][1], bounds[1][2]);

                lowerb1 = Scalar(0,bounds[0][1], bounds[0][2]);
                upperb1 = Scalar(bounds[1][0],bounds[1][1], bounds[1][2]);
            }
            else{
            lowerb = Scalar(bounds[0][0],bounds[0][1], bounds[0][2]);
            upperb = Scalar(bounds[1][0],bounds[1][1], bounds[1][2]);

            lowerb1 = Scalar(bounds[0][0],bounds[0][1], bounds[0][2]);
            upperb1 = Scalar(bounds[1][0],bounds[1][1], bounds[1][2]);
            }

            cap = VideoCapture(stream_commad);
            if (!cap.isOpened()) {
                cerr << "Unable to open camera\n";
                exit(-1);
            }

        }

        int process_frame(void);
        void show(void);
        ~tracker(){
            video.release();
            cap.release();
        }

        enum PUCK_STATUS {PUCK_FOUND = 0, PUCK_LOST = 1};

};