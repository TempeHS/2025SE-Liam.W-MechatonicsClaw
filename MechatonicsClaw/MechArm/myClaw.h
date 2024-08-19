#ifndef myClaw_H
#define myClaw_H
#include <Arduino.h>
//inherit from other classes
#include "myServo.h"

class myClaw : public myServo
{
protected:
  myServo claw;
public:
  myClaw() {} // do not use
  myClaw(myServo& claw);
  myClaw(byte pin, byte state);
  void open();
  void close();
  void blockclose();
};


#endif 