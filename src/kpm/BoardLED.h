#pragma once

class BoardLED {
private:
  bool invert;
  int pins[3];

public:
  BoardLED(int _pin0, int _pin1, int _pin2 = -1, bool _invert = false);
  void initialize();
  void write(int index, bool value);
  void toggle(int index);
};
