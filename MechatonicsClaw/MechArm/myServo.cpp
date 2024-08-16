#include "myServo.h" 
#include <Servo.h>

myServo::myServo(Servo &myservo) {
  myservo = myservo;
}

myServo::myServo(byte pin, byte state) {
  _pin = pin;
  _state = state;
}

void myServo::init() {
  myservo.attach(_pin);
}

void myServo::writevalue(byte value){
  unsigned int _value = value;
  myservo.write(value); //write position (optional cause servo also has)
} 

// void servo::init(byte defaultState) {...}
//void readstate(); // read position (optional cause servo also has)

