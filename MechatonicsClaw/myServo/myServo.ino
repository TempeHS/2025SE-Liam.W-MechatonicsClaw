#include "myServo.h"

static unsigned int pin = 10;
unsigned int state = 0;

myServo servo1(pin, state);

void setup() {
  servo1.init();
  if (state == 0) {
    servo1.write(90);
  }
  else {
    servo1.write(180);
  }
}

void loop() {

}