#pragma once

typedef void (*KeyStateListenerFn)(int keyIndex, bool pressed);

class KeyMatrix {
private:
  const int *columnPins;
  const int *rowPins;
  int numColumns;
  int numRows;
  KeyStateListenerFn keyStateListener;
  bool *inputKeyStates;

public:
  bool *keyStates;

  KeyMatrix(const int *_columnPins, const int *_rowPins, int _numColumns, int _numRows);
  void setKeyStateListener(KeyStateListenerFn fn);
  void initialize();
  void updateInput();
};
