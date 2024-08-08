#ifndef LEDArray_H
#define LEDArray_H
#include <Arduino.h>
#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"



class LEDArray

{
private:
  const char* _VerNum;
public:
  LEDArray() {} // don't use
  LEDArray(const char* VerNum);
  
  void printNum();
};



#endif