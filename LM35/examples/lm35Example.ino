#include <LM35.h>

LM35 lm35(A0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Temperature with LM35 sensor");
  Serial.print("Temperature : ");
  Serial.print(lm35.getKelvin());
  Serial.println(" K");
  Serial.print("Temperature : ");
  Serial.print(lm35.getCelcius());
  Serial.println(" C");
  Serial.print("Temperature : ");
  Serial.print(lm35.getFahrenheit());
  Serial.println(" F");
  Serial.println("--------------------");
  delay(5000);
}
