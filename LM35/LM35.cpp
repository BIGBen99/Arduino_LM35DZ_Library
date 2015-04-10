/*
  lm35.cpp - Library for LM35 sensor.
  Created by Benoit Didry, January 31, 2015.
  Released into the public domain.
*/
#include "Arduino.h"
#include "LM35.h"

LM35::LM35(int pin) {
  _pin = pin;
}

float LM35::getKelvin() {
  analogRead(_pin);
  delay(10);
  return analogRead(_pin) * 500.0 / 1023.0 + 273.15; 
}

float LM35::getCelcius() {
  analogRead(_pin);
  delay(10);
  return analogRead(_pin) * 500.0 / 1023.0;
}

float LM35::getFahrenheit() {
  analogRead(_pin);
  delay(10);
  return analogRead(_pin) * 300.0 / 341.0 + 32; 
}
