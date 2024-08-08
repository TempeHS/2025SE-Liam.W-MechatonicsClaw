#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"
#include "LEDArray.h"

static const char* VerNum = "V00.00.21";

LEDArray VersionNumber(VerNum);

void setup() {
  VersionNumber.printNum();
}

void loop() {

}