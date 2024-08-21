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

void MechArm::baseStance() {
  myservolower.writevalue(140);
  myclaw.writevalue(140);
  mybase.basepos();
  delay(1000);
  mybase.redpos();
  myservoupper.writevalue(80);
  delay(1000);
  myservolower.writevalue(160);
  delay(1000);
  myservolower.writevalue(180);
}
void MechArm::basepickup() {
  myservolower.writevalue(170);
  myservoupper.writevalue(30);
  myclaw.writevalue(90);
  delay(1000);
  delay(1000);
  myclaw.writevalue(120);
}
void MechArm::redSequence() {
  myservoupper.writevalue(0);
  delay(1000);
  myservoupper.writevalue(90);
  delay(1000);
  myservolower.writevalue(0);
  delay(1000);
  myservoupper.writevalue(90);
  delay(1000);
}

void MechArm::blueSequence() {}
void MechArm::greenSequence() {}

void MechArm::test() {
  myclaw.writevalue(140);
}

