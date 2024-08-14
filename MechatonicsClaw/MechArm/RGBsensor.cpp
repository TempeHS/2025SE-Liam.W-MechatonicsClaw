#include "RGBsensor.h" 
#include <Arduino.h>
#include <Wire.h>
#include "Adafruit_TCS34725.h"

byte gammatable[256];
Adafruit_TCS34725 varSensor = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

RGBsensor::RGBsensor(byte pin) {
  _pin=pin;
}

void RGBsensor::RGBinit() {
  Serial.begin(9600);
  Serial.println("Color View Test!");

  if (varSensor.begin()) {
    Serial.println("Found sensor");
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1);
  }
}

void RGBsensor::RGBtocolour() {
  for (int i=0; i<256; i++) {
  float x = i;
  x /= 255;
  x = pow(x, 2.5);
  x *= 255;
  gammatable[i] = 255 - x;
  }
}

void RGBsensor::printcolour() {
  float red, green, blue;
  delay(60);  // takes 50ms to read
  varSensor.getRGB(&red, &green, &blue);
  if (int(red) >= 165) {
    Serial.print("RED");
    Serial.print("\n");
    const char* colour = "red";
  }
  else if (int(green) >= 115) {
    Serial.print("GREEN");
    Serial.print("\n");
    const char* colour = "green";
  }
  else if ( int(blue) >= 125) {
    Serial.print("BLUE");
    Serial.print("\n");
    const char* colour = "blue";
  }
  else {
    Serial.print("R:\t"); Serial.print(int(red)); 
    Serial.print("\tG:\t"); Serial.print(int(green)); 
    Serial.print("\tB:\t"); Serial.print(int(blue));
    Serial.print("\n");
  }
  }
