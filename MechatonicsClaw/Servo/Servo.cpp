#include "Servo.h" 
#include <Servo.h>

servo::servo(byte pin, byte state) {
  _pin = pin;
  _state = state;
}


void servo::init() {
  pinMode(_pin, OUTPUT);
}
// void servo::init(byte defaultState) {...}

//void readstate(); // read position (optional cause servo also has)
//void writevalue(); //write position (optional cause servo also has)
