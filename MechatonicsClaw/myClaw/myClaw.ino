#include "myClaw.h"

static unsigned int clawpin = 6;
static unsigned int clawstate = 0;

myClaw claw1(clawpin, clawstate);

void setup() {
  claw1.init();

}

void loop() {
  claw1.open();
  delay(1000);
  claw1.close();
  delay(1000);
}