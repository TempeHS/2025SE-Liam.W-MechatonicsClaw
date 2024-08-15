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
  LEDArray& LEDArray;
  RGBsensor& RGBsensor;
  myBase& myBase;
  myClaw& myClaw;
  myServo& myServoUpper;
  myServo& myServoLower;
public:
  MechArm () {} //don't use
  MechArm (LEDArray& LEDArray, RGBsensor& RGBsensor, myBase& myBase, myClaw& myClaw, myServo& myServoUpper, myServo& myServoLower);
  MechArm.init();
}


#endif