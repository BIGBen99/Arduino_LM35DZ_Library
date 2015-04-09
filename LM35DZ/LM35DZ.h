/*
  LM35DZ.h - Library for LM35DZ sensor.
  Created by Benoit Didry, January 31, 2015.
  Released into the public domain.
  
  20150203 : remove getTemperature method and add getKelvin, getCelcius, getFahrenheit
*/
#ifndef LM35DZ_h
#define LM35DZ_h

#include "Arduino.h"

class LM35DZ {
  public:
    LM35DZ(int pin);
    float getKelvin();
    float getCelcius();
    float getFahrenheit();
  private:
    int _pin;
};

#endif
