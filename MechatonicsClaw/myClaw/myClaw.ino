#include "myClaw.h"

static unsigned int clawpin = 6;
static unsigned int clawstate = 0;

myClaw claw1(clawpin, clawstate);

void setup() {
  claw1.init();
  claw1.open();
}

void loop() {

}