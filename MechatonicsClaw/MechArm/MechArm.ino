#include "MechArm.h"
#include "LEDArray.h"
#include "RGBsensor.h"
#include "myBase.h"
#include "myServo.h"
#include "myClaw.h"
//variables
static const char* VerNum = "V00.00.21";
//object setup
LEDArray array(VerNum);
RGBsensor rgbsensor();
myBase base(basepin, basestate);
myClaw claw(clawpin, clawstate);
myServo myservoupper(upperpin, upperstate);
MechArm arm();


void setup() {
  arm.printNum();
}

void loop() {

}