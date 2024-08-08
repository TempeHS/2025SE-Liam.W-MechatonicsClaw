#include "myClaw.h"
#include "myServo.h"

myServo clawservo;

myClaw::myClaw(byte pin, byte state) {
  _pin = pin;
  _state = state;
}

void myClaw::open() {
  clawservo.writevalue(90);
}
void myClaw::close() {
  clawservo.writevalue(140);
}
void myClaw::blockclose() {
  clawservo.writevalue(120);
}