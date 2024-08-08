#include "RGBsensor.h" 
#include <Arduino.h>
#include <107-Arduino-TCS3472.h>

RGBsensor::RGBsensor(byte pin) {
  _pin = pin;
}

void RGBsensor::RGBinit() {
  pinMode(_pin, INPUT);
  readstate();
}
void RGBsensor::readstate() {
  int colour = analogRead(_pin);
}

void RGBsensor::RGBreadcolour() {
  if colour == 
}