// ----------------------------------------------------------------------------
// LedArrayTester.h
//
//
// Authors:
// Peter Polidoro peter@polidoro.io
// ----------------------------------------------------------------------------
#ifndef LED_ARRAY_TESTER_H
#define LED_ARRAY_TESTER_H

#include <Arduino.h>


class LedArrayTester
{
public:
  void setup();
  void update();
private:
  uint8_t led_count_;
};

#endif
