#include "RGBsensor.h" 
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_TCS34725.h>

ArduinoTCS3472 sensor;
Adafruit_TCS34725 mySensor = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

RGBsensor::RGBsensor(byte pin) {
  _pin = pin;
}

void RGBsensor::RGBinit() {
}
void RGBsensor::RGBreadcolour() {}

void RGBsensor::printcolour() {
  float red, green, blue;

  delay(60);  // takes 50ms to read

  tcs.getRGB(&red, &green, &blue);

  Serial.print("R:\t"); Serial.print(int(red)); 
  Serial.print("\tG:\t"); Serial.print(int(green)); 
  Serial.print("\tB:\t"); Serial.print(int(blue));

  Serial.print("\n");
}