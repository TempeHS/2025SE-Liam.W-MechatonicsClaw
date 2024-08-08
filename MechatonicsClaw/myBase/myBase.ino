#include "myBase.h"

static unsigned int pin = 10;
static unsigned int state = 0;

myBase base1(pin, state);

void setup() {
  base1.init();
  base1.basepos();
}

void loop() {
  
}