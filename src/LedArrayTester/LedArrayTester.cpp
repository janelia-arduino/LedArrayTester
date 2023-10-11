// ----------------------------------------------------------------------------
// LedArrayTester.cpp
//
//
// Authors:
// Peter Polidoro peter@polidoro.io
// ----------------------------------------------------------------------------
#include "LedArrayTester.h"


void LedArrayTester::setup()
{
  led_count_ = 8;
  for (uint8_t led_pin = 0; led_pin<led_count_; ++led_pin)
  {
    pinMode(led_pin, OUTPUT);
    digitalWrite(led_pin, LOW);
  }
}

void LedArrayTester::update()
{
  for (uint8_t led_pin = 0; led_pin<led_count_; ++led_pin)
  {
    digitalWrite(led_pin, HIGH);
    delay(200);
    digitalWrite(led_pin, LOW);
    delay(200);
  }
}

