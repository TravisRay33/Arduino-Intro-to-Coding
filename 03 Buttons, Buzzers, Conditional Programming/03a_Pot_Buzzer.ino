//Using Arduino Sensor Kit
//Code modified by Travis Ray

#include "Arduino_SensorKit.h"

#define BUZZER 5
#define POT A0

int pot_value;


void setup() {
  Serial.begin(9600);

  pinMode(BUZZER, OUTPUT);
}


void loop() {
  pot_value = analogRead(POT);
  Serial.print("Pot State is ");
  Serial.println(pot_value);


  tone(BUZZER, pot_value);
  delay(500);
  noTone(BUZZER);
  delay(500);
}
