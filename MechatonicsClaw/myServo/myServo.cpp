#include "myServo.h" 
#include <Servo.h>

myServo::myServo(byte pin, byte state) {
  _pin = pin;
  _state = state;
}


void myServo::init() {
  Servo.attach(_pin);
}

void myServo::writevalue(byte value){
  _value = value
  Servo.write(_value); //write position (optional cause servo also has)
} 

// void servo::init(byte defaultState) {...}
//void readstate(); // read position (optional cause servo also has)

