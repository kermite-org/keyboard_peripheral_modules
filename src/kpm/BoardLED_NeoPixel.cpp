#include "BoardLED_NeoPixel.h"
#include <Arduino.h>

BoardLED_NeoPixel::BoardLED_NeoPixel(int pin, int _brightness, int _powerPin)
    : neoPixel(1, pin, NEO_BGR) {
  brightness = _brightness;
  powerPin = _powerPin;
}

void BoardLED_NeoPixel::initialize() {
  if (powerPin != -1) {
    pinMode(powerPin, OUTPUT);
    digitalWrite(powerPin, HIGH);
  }
  neoPixel.setBrightness(brightness);
}

void BoardLED_NeoPixel::write(int index, bool value) {
  states[index] = value;
  updateLedColor();
}

void BoardLED_NeoPixel::toggle(int index) {
  states[index] = !states[index];
  updateLedColor();
}
