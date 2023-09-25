//Using Arduino Sensor Kit
//Code modified by Travis Ray

#include "Arduino_SensorKit.h"

//Defines do not take up memory like variables. Cannot be changed. 
#define BUZZER 5
#define POT A0

//Utilize variable when I need it stored & will change
int pot_value;


void setup() {
  Serial.begin(9600);
  pinMode(BUZZER, OUTPUT);
}


void loop() {
  pot_value = analogRead(POT);   //Obtain current Pot value
  Serial.print("Pot State is ");
  Serial.println(pot_value);


  tone(BUZZER, pot_value);  //Plays a tone at Pot value frequency
  delay(500);
  noTone(BUZZER);   //Turn off buzzer
  delay(500);
}
