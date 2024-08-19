#ifndef myBase_H
#define myBase_H
#include <Arduino.h>
//inherit from other classes
#include "myServo.h"

class myBase : public myServo
{
protected:

public:
  myBase() {} //don't use
  myBase(byte pin, byte state);
  void basepos();
  void redpos();
  void bluepos();
  void greenpos();
};


#endif 