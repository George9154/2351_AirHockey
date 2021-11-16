#include <Arduino.h>
#include <RoboClaw.h>
#define CHIP_SELECT_LEFT A4
#define CHIP_SELECT_RIGHT PB5
#define MOTOR_LEFT 0x81
#define MOTOR_RIGHT 0x80
#define two_to_the_14 16384
#define PULLEY_RADIUS 3.5306 // 2.78 inches in cm
#define ANGLE_THRESH 350
#define NUM_READS 200
#define OMEGA 360.0
const float ticks_to_deg = 360.0/two_to_the_14;

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

class MalletController {

    float px = 55;
    float ix = 50;
    float dx = 1.2;
    float py = 45;
    float iy = 50;
    float dy = 1.35;

    // Size of SavGol Filter Window
    static const int window = 40;

    // make sure this value is smaller than window!!
    // Used for integrating
    static const int position_window = 500;
    
    //Coefficients for savgol filter

    float savgol[window];

    //Array for storing computing integral error
    float pos_error[2][position_window] = {0};

    float angle_reading[2];
    float prev_angle[2];
    float current_total_angle[2];
    int num_zerocrosses[2];

    float current_velocity[2];
    float velocity_hist[2][window] = {0};
    float xy_hist[2][window] = {0};
    float time_hist[window] = {0};
    float window_step_size;

    float start_angles[2];
    float xy[2];
    float start_time;
    float desired_xy[2];
    float desired_velocity[2];
    float integral_error[2] = {0};



    float effort_x;
    float effort_y;
    float err_x_pos;
    float err_y_pos;
    float err_x_vel;
    float err_y_vel;

    float x_coeffs[6] = {0,0,0,0,0,0};
    float y_coeffs[6] = {0,0,0,0,0,0};
    float end_time = 0;

    // float err_m1;
    // float err_m2;

    int effort_m1;
    int effort_m2;
    int loop_counter = 0;

    RoboClaw* roboclaw_p;
    HardwareSerial* serial_p;



    private:

        void update_savgol_coeff(float coeffs[]){
            float start = 6.0/(window*(window+1));
            float del = -12.0/((window-1)*(window)*(window+1));

            for (int i = 0; i<window;i++){
                coeffs[i] = start;
                start = start+del;
            }
        }
        
        void update_all_positions();
        void update_desired_path();
        void update_desired_path_position(float time, float x_coeffs[], float y_coeffs[], float ret_val[]);
        void write_to_motor(uint8_t address, int val);
        void readAngle(float result[]);
        void write_to_motor_simple(uint8_t val);
        void update_xy(float xy[], float total_angles[]);
        void make_total_angle(float total_angle[], float angle[], int crosses[]);
        void update_desired_path_velocity(float time, float x_coeffs[], float y_coeffs[], float ret_vel[]);
        void update_velocity(float xy[], float vel[], float xy_hist[2][window]);
        void compute_int_error();
        void zeroCrossing(int crosses[], float velocity[], float  angle[]);


    public:

        MalletController() {
            //Coefficients for savgol filter
            update_savgol_coeff(savgol);
            HardwareSerial Serial2(PA3, PA2);
            RoboClaw roboclaw(&Serial2, 460800);
            RoboClaw* roboclaw_p = &roboclaw;
            HardwareSerial* serial_p = &Serial2;
            pinMode(CHIP_SELECT_LEFT, OUTPUT);
            pinMode(CHIP_SELECT_RIGHT, OUTPUT);
            digitalWrite(CHIP_SELECT_LEFT, HIGH);
            digitalWrite(CHIP_SELECT_RIGHT, HIGH);
        }

        ~MalletController();
        bool update();
        void setPID();
        void setPath(float final_vals[]);
                
};