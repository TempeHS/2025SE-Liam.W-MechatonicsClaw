#include "myClaw.h"

static unsigned int clawpin = 10;
static unsigned int clawstate = 0;

myClaw claw1(clawpin, clawstate);

void setup() {
  claw1.init();
  claw1.close();
}

void loop() {
  claw1.open();
  delay(1000);
  claw1.close();
  delay(1000);
  claw1.open();
}