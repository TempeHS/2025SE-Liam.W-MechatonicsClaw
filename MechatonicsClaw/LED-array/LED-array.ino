#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"
#include "LEDArray.h"

static const char VerNum = "V00.00.01"


void setup() {
  LEDArray(VerNum);
  printNum();
}

void loop() {

}