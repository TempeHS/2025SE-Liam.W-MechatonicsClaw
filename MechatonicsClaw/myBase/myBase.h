#ifndef myBase_H
#define myBase_H
#include <Arduino.h>
//inherit from other classes
#include "myServo.h"

class myBase : public myServo
{
private:

public:
  myBase(byte pin, byte state);
  void basepos();
  void redpos();
  void bluepos();
  void greenpos();
};


#endif 