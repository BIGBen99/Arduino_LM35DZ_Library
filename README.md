# Arduino_LM35DZ_Library
Arduino library for LM35DZ temperature sensor

Datasheet : http://www.ti.com/lit/ds/symlink/lm35.pdf

================================================================================
# LM35DZ(pin)
# Description
A call to LM35DZ(pin) creates a new LM35DZ object.
# Parameters
- pin: the analog pin (A0-A6) on which to reveive temperature information

================================================================================
# LM35DZ: getKelvin
# Description
Return a float that represents the temperature in Kelvin
# Parameters
- none
# Returns
a float that represents the temperature in Kelvin

================================================================================
# LM35DZ: getCelcius
# Description
Return a float that represents the temperature in Celsius
# Parameters
- none
# Returns
a float that represents the temperature in Celsius

================================================================================
# LM35DZ: getFahrenheit
# Description
Return a float that represents the temperature in Farenheit
# Parameters
- none
# Returns
a float that represents the temperature in Farenheit

================================================================================
# Example

&#35;include &lt;LM35DZ.h&gt;

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
