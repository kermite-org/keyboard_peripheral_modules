#include "SimpleButton.h"
#include <Arduino.h>

SimpleButton::SimpleButton(int _pin) {
  pin = _pin;
  pinMode(pin, INPUT_PULLUP);
}

void SimpleButton::update() {
  bool hold_next = digitalRead(pin) == LOW;
  pressed = !hold && hold_next;
  released = hold && !hold_next;
  hold = hold_next;
}
