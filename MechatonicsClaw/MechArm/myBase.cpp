#include "myBase.h"
#include "myServo.h"

myServo baseservo;

myBase::myBase(byte pin, byte state) {
  _pin = pin;
  _state = state;
}

void myBase::basepos() {
  baseservo.writevalue(100);
}
void myBase::redpos() {
  baseservo.writevalue(100);
}
void myBase::bluepos() {
  baseservo.writevalue(150);
}
void myBase::greenpos() {
  baseservo.writevalue(50);
}