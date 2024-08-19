#include "myClaw.h"
#include "myServo.h"

myClaw::myClaw(myServo& claw) {
  claw = claw;
}

myClaw::myClaw(byte pin, byte state) {
  _pin = pin;
  _state = state;
}

void myClaw::open() {
  claw.writevalue(90);
}
void myClaw::close() {
  claw.writevalue(140);
}
void myClaw::blockclose() {
  claw.writevalue(120);
}