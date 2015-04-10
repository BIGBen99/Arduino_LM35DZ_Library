/*
  lm35DZ.cpp - Library for LM35DZ sensor.
  Created by Benoit Didry, January 31, 2015.
  Released into the public domain.

  20150203 : remove getTemperature method and add getKelvin, getCelcius, getFahrenheit
*/

#include "Arduino.h"
#include "LM35DZ.h"

LM35DZ::LM35DZ(int pin) {
  _pin = pin;
}

float LM35DZ::getKelvin() {
  analogRead(_pin);
  delay(10);
  return analogRead(_pin) * 500.0 / 1023.0 + 273.15; 
}

float LM35DZ::getCelcius() {
  analogRead(_pin);
  delay(10);
  return analogRead(_pin) * 500.0 / 1023.0;
}

float LM35DZ::getFahrenheit() {
  analogRead(_pin);
  delay(10);
  return analogRead(_pin) * 300.0 / 341.0 + 32; 
}
