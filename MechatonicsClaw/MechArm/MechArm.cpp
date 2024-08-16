#include "MechArm.h"
//other classes
#include "LEDArray.h"
#include "RGBsensor.h"
#include "myBase.h"
#include "myServo.h"
#include "myClaw.h"

MechArm::MechArm (LEDArray& ledarray, RGBsensor& rgbsensor, myBase& mybase, myClaw& myclaw, myServo& myservoupper, myServo& myservolower)
  : ledarray(ledarray), rgbsensor(rgbsensor), mybase(mybase), myclaw(myclaw), myservoupper(myservoupper), myservolower(myservolower) {}

void MechArm::init() {
  rgbsensor.RGBinit();
  mybase.init();
  myclaw.init();
  myservoupper.init();
  myservolower.init();
}