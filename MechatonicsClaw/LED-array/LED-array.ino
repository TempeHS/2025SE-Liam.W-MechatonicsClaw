#include "Arduino_LED_Matrix.h"


void setup() {
  Serial.begin(9600);
  matrix.begin();

  matrix.beginDraw();
  matrix.stroke(0xFFFFFFFF);
  matrix.textScrollSpeed(50);
  const char text[] = "v0.0.001";
}

void loop() {

}