#ifndef LEDArray_H
#define LEDArray_H
# include <Arduino.h>
#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

class LEDArray

{
private:
  byte _VerNum;
public:
  LEDArray() {} // don't use
  LEDArray(byte VerNum);
  
  void printNum();
};



#endif