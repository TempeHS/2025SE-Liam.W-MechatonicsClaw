#ifndef myClaw_H
#define myClaw_H
#include <Arduino.h>
//inherit from other classes
#include "myServo.h"

class myClaw : public myServo
{
private:

public:
  myClaw(byte pin, byte state);
  void open();
  void close();
  void blockclose();
};


#endif 