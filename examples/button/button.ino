#include <keyboard_peripheral_modules.h>

SimpleButton button(0); //set an input pin for your board

void setup() {
  Serial.begin(115200);
}

void loop() {
  button.update();
  if (button.pressed) {
    Serial.println("button pressed");
  }
  if (button.released) {
    Serial.println("button released");
  }
  if (button.hold) {
    Serial.println("button hold");
  }
  delay(100);
}
