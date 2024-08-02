#include "servo.h"

static unsigned int pin = 10;
unsigned int state = 0;

servo servo1(pin, state);

void setup() {
  servo1.init();
  if (state == 0) {
    Servo.write(90)
  }
}

void loop() {

}