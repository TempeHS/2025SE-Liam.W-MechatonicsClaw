#include "myBase.h"

static unsigned int pin = 9;
static unsigned int state = 0;

myBase base1(pin, state);

void setup() {
  base1.init();
  base1.basepos();
}

void loop() {
  base1.basepos();
  delay(1000);
  base1.bluepos();
  delay(1000);
  base1.basepos();
  delay(1000);
  base1.greenpos();
  delay(1000);
  base1.redpos();
  delay(1000);
}