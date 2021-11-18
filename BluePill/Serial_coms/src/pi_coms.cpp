#include <pi_coms.h>

void coms_init() {
  Serial.begin(1000000);
  Serial.setTimeout(1);
  delay(100);
}

bool read_from_pi(uint8_t *buffer) {
  // start = micros();
  float f;
  float sum;
  Serial.readBytes(buffer, 20);  
  for (int i = 0; i < 4; i++) {
    memcpy(&f, &(buffer[4*i]), 4);
    sum = sum + f;
  }
  memcpy(&f, &(buffer[16]), 4);
  if (abs(sum-f) < 0.001) {
    return true;
  }
  return false;
  // read_time = micros() - start;
}

void write_to_pi(uint8_t *buffer) {
  // start = micros();
  for (int i = 0; i<SEND_SIZE; i++) {
    Serial.write(buffer[i]);
  }
  // write_time = micros() - start;
}