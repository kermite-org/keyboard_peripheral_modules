#pragma once
#include "IKeyScanner.h"
#include <stdint.h>

class KeyMatrix : public IKeyScanner {
private:
  const int *columnPins;
  const int *rowPins;
  int numColumns;
  int numRows;
  int keyIndexBase;
  KeyStateListenerFn keyStateListener;
  bool *inputKeyStates;

public:
  bool *keyStates;

  KeyMatrix(const int *_columnPins, const int *_rowPins, int _numColumns,
            int _numRows);
  KeyMatrix(const uint8_t *_columnPins, const uint8_t *_rowPins,
            int _numColumns, int _numRows);

  void setKeyIndexBase(int _keyIndexBase);
  void setKeyStateListener(KeyStateListenerFn fn);
  void initialize();
  void updateInput();
};
