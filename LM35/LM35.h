/*
  LM35.h - Library for LM35 sensor.
  Created by Benoit Didry, January 31, 2015.
  Released into the public domain.
*/
#ifndef LM35_h
#define LM35_h

#include "Arduino.h"

class LM35 {
  public:
    LM35(int pin);
    float getKelvin();
    float getCelcius();
    float getFahrenheit();
  private:
    int _pin;
};

#endif
