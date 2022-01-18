# Arduino_LM35_Library
Arduino library for LM35 temperature sensor

Datasheet : http://www.ti.com/lit/ds/symlink/lm35.pdf

===========================================================================
# LM35(pin)
# Description
A call to LM35(pin) creates a new LM35 object.
# Parameters
pin: the analog pin (A0-A6) on which to receive temperature information

===========================================================================
# LM35: getKelvin
# Description
Return a float that represents temperature in Kelvin
# Parameters
[none]
# Returns
a float that represents temperature in Kelvin

===========================================================================
# LM35: getCelcius
# Description
Return a float that represents temperature in Celsius
# Parameters
[none]
# Returns
a float that represents temperature in Celsius

===========================================================================
# LM35: getFahrenheit
# Description
Return a float that represents temperature in Farenheit
# Parameters
[none]
# Returns
a float that represents temperature in Farenheit

===========================================================================
# Example
<pre>
&#35;include &lt;LM35.h&gt;

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
</pre>
