#ifndef Servo_H
#define Servo_H
#include <Arduino.h>
#include <Servo.h>
class myServo
{
private:
  byte _pin;
  byte _state; //might change data type
public:
  myServo() {} // don't use
  myServo(byte pin, byte state);
  
  void init();
  void init(byte defaultState); // do later when you find out servo values

  void readstate(); // read position (optional cause servo also has)
  void writevalue(); //write position (optional cause servo also has)
};

#endif