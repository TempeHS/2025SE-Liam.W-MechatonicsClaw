#ifndef RGBsensor_H
#define RGBsensor_H
#include <Arduino.h>
class RGBsensor 
{
protected:
  byte _pin;
  byte _colour;
  void RGBreadcolour(); 
public: 
  RGBsensor() {} //don't use
  RGBsensor(byte pin);
  void printcolour();

  void RGBinit();
  
};





#endif 