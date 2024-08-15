#include "MechArm.h"
//other classes
#include "LEDArray.h"
#include "RGBsensor.h"
#include "myBase.h"
#include "myServo.h"
#include "myClaw.h"

MechArm::MechArm (LEDArray& LEDArray, RGBsensor& RGBsensor, myBase& myBase, myClaw& myClaw, myServo& myServoUpper, myServo& myServoLower)
  : LEDArray(LEDArray), RGBsensor(RGBsensor), myBase(myBase), myClaw(myClaw), myServo(myServoUpper), myServo(myServoLower) {}

void MechArm::MechArm.init() {
  LEDArray.init();
  RGBsensor.RGBinit();
  myBase.init();
  myClaw.init();
  myServo.init();
}