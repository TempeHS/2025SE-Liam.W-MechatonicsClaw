#ifndef MechArm_H
#define MechArm_H
#include <Arduino.h>
//other classes
#include "LEDArray.h"
#include "RGBsensor.h"
#include "myBase.h"
#include "myServo.h"
#include "myClaw.h"


class MechArm {
private:
  LEDArray& ledarray;
  RGBsensor& rgbsensor;
  myBase& mybase;
  myClaw& myclaw;
  myServo& myservoupper;
  myServo& myservolower;
public:
  MechArm (LEDArray& ledarray, RGBsensor& rgbsensor, myBase& mybase, myClaw& myclaw, myServo& myservoupper, myServo& myservolower);
  void init();
  void redSequence();
  void blueSequence();
  void greenSequence();
  void baseStance();
};


#endif