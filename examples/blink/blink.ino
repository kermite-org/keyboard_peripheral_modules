#include <keyboard_peripheral_modules.h>

BoardLED boardLED(25);

void setup() {
  boardLED.initialize();
}

void loop() {
  boardLED.write(0, true);
  delay(100);
  boardLED.write(0, false);
  delay(100);
}
