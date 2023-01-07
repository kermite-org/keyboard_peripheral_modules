#pragma once

class SimpleButton {
private:
  int pin;

public:
  bool hold;
  bool pressed;
  bool released;

  SimpleButton(int _pin);
  void update();
};
