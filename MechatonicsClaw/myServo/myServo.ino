#include "myServo.h"
#include <Servo.h>

static unsigned int pin = 10;
unsigned int state = 0;

myServo servo1(pin, state);

void setup() {
  servo1.init();
  servo1.writevalue(90);
}

void loop() {

}