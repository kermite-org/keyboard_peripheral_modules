#include <keyboard_peripheral_modules.h>

BoardLED boardLED(25); //raspberry pi pico
// BoardLED boardLED(18, 19, 20, true);      //tiny2040
// BoardLED_NeoPixel boardLED(17, 0x40);     //kb2040
// BoardLED_NeoPixel boardLED(12, 0x40, 11); //xiao rp2040
// BoardLED_NeoPixel boardLED(16, 0x40);     //rp2040-zero
// BoardLED_NeoPixel boardLED(12, 0x40, 11); //qt py rp2040
// BoardLED_NeoPixel boardLED(25, 0x40);     //promicro rp2040
// BoardLED_NeoPixel boardLED(23, 0x40);     //yd-rp2040

void setup() {
  boardLED.initialize();
}

void loop() {
  boardLED.write(0, true);
  delay(100);
  boardLED.write(0, false);
  delay(100);
}
