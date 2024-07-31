#include "Servo.h" 
#include <Servo.h>

Servo::Servo(byte pin, byte state) {
  _pin = pin;
  _state = state;
}


void Servo::init() {
  pinMode(_pin, OUTPUT)
}
void Servo::init(byte defaultState) {
  ...
}
"""
void readstate(); // read position (optional cause servo also has)
void writevalue(); //write position (optional cause servo also has)
"""