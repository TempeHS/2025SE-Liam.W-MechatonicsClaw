#include "myClaw.h"
#include "myServo.h"

myServo servo;

void myClaw::open() {
  servo.writevalue(90);
}
void myClaw::close() {
  servo.writevalue(140);
}
void myClaw::blockclose() {
  servo.writevalue(120);
}