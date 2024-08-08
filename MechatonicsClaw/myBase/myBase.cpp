#include "myBase.h"
#include "myServo.h"

myServo baseservo;

myBase::myBase(byte pin, byte state) {
  _pin = pin;
  _state = state;
}

void myBase::basepos() {
  baseservo.writevalue(90);
}
void myBase::redpos() {
  baseservo.writevalue(90);
}
void myBase::bluepos() {
  baseservo.writevalue(135);
}
void myBase::greenpos() {
  baseservo.writevalue(45);
}