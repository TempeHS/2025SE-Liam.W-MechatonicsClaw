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
  myclaw.writevalue(140); //should be myclaw.close()
  mybase.writevalue(100); //should be mybase.basepos()
  delay(1000);
  myservoupper.writevalue(80);
  delay(1000);
  myservolower.writevalue(160);
  delay(1000);
  myservolower.writevalue(170);
  delay(1500);
  myservolower.writevalue(180);
  delay(1000); //safety delay
}
void MechArm::basepickup() {
  myservolower.writevalue(160);
  myclaw.writevalue(90); //should be myclaw.open()
  delay(1000);
  myservolower.writevalue(170);
  delay(1000);
  myservoupper.writevalue(30);
  delay(1000);
  myclaw.writevalue(120); //should be myclaw.blockclose()
  delay(1000); //safety delay
}
void MechArm::redSequence() {
  myservolower.writevalue(90);
  myservoupper.writevalue(90);
  delay(500);
  mybase.writevalue(100); //should be mybase.redpos()
  delay(1000);
  myservolower.writevalue(0);
  delay(1000);
  myservoupper.writevalue(130);
  delay(1000);
  myclaw.writevalue(90); //should be myclaw.open()
  delay(1000); //safety delay
}

void MechArm::blueSequence() {
  myservolower.writevalue(90);
  myservoupper.writevalue(90);
  delay(500);
  mybase.writevalue(150); //should be mybase.bluepos()
  delay(1000);
  myservolower.writevalue(0);
  delay(1000);
  myservoupper.writevalue(130);
  delay(1000);
  myclaw.writevalue(90); //should be myclaw.open()
  delay(1000); //safety delay
}
void MechArm::greenSequence() {
  myservolower.writevalue(90);
  myservoupper.writevalue(90);
  delay(500);
  mybase.writevalue(50); // should be mybase.greenpos()
  delay(1000);
  myservolower.writevalue(0);
  delay(1000);
  myservoupper.writevalue(130);
  delay(1000);
  myclaw.writevalue(90); //should be myclaw.open()
  delay(1000); //safety delay
}

void MechArm::test() {
  myclaw.writevalue(140);
}


