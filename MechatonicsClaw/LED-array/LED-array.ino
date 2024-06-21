#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

void setup() {
  Serial.begin(9600);
   matrix.begin();
   matrix.textFont(Font_5x7);
   matrix.textScrollSpeed(100);
   matrix.stroke(0xFF, 0, 0);
   matrix.beginText(0, 1, 0xFF, 0, 0);
   matrix.print("V00.00.01");
   matrix.endText(SCROLL_LEFT);
}

void loop() {

}