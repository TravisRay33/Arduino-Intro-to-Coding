/*

Example sketch 01

BLINKING A LED

  Turn an LED on for one second, off for one second,
  and repeat forever.
*/

void setup()
{
  pinMode(13, OUTPUT); //LED wire is plugged into pin 13
}


void loop()
{
  digitalWrite(13, HIGH);   // Turn on the LED
  delay(1000);              // Wait for one second
  digitalWrite(13, LOW);    // Turn off the LED
  delay(1000);              // Wait for one second
}

