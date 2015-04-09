#include <LM35DZ.h>

LM35DZ lm35dz(A0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Temperature with LM35DZ sensor");
  Serial.print("Temperature : ");
  Serial.print(lm35dz.getKelvin());
  Serial.println(" K");
  Serial.print("Temperature : ");
  Serial.print(lm35dz.getCelcius());
  Serial.println(" C");
  Serial.print("Temperature : ");
  Serial.print(lm35dz.getFahrenheit());
  Serial.println(" F");
  Serial.println("--------------------");
  delay(5000);
}
