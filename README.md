# keyboard_peripheral_modules

A set of modules to be used in a keyboard firmware.

Although it is supposed to work with KermiteCore_Arduino, these modules are not depend on KermiteCore directly. They also could be used in any arbitrary projects not related to keyboards.

Currently, it includes the modules listed below.

### BoardLED
Provide up to 3 LEDs on board. Support normal (non-neopixel) RGB LEDs. 

### BoardLED_NeoPixel
Wrap onboard NeoPixel LED so as to be used as 3 individual LEDs. The interface is the same as BoardLED.

### KeyMatrix
General key matrix scanner. It is compatible to key matrix circuit with per-switch diode or diode-less. If there are'n diodes, only up to 2 keys could be detected at a time.


