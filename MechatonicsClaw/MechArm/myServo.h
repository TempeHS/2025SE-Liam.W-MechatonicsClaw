#ifndef myServo_H
#define myServo_H
#include <Arduino.h>
#include <Servo.h>
class myServo
{
protected:
  byte _pin;
  byte _state; //might change data type
  Servo myservo;
public:
  myServo() {} // don't use
  myServo(Servo& myservo);
  myServo(byte pin, byte state);
  
  void init();
  void init(byte defaultState); // do later when you find out servo values
  
  void writevalue(byte value); //write position (optional cause servo also has)
  
  void readstate(); // read position (optional cause servo also has)
  
};

#endif