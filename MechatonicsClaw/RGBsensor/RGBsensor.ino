#include <Arduino.h>
#include <Wire.h>
#include "Adafruit_TCS34725.h"
#include "RGBsensor.h"


byte gammatable[256];

RGBsensor mySensor(2);

void setup() {
  Serial.begin(9600);
  mySensor.RGBinit();
  mySensor.RGBtocolour();
}





void loop() {
  mySensor.printcolour();
}