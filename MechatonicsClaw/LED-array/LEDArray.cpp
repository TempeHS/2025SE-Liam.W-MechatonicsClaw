#include "LEDArray.h" 
#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"



LEDArray::LEDArray(byte VerNum)
{
  _VerNum = VerNum;
}
  
void LEDArray::printNum()
{
  Serial.begin(9600);
   matrix.begin();
   matrix.textFont(Font_5x7);
   matrix.textScrollSpeed(100);
   matrix.stroke(0xFF, 0, 0);
   matrix.beginText(0, 1, 0xFF, 0, 0);
   matrix.print(_VerNum);
   matrix.endText(SCROLL_LEFT);
}