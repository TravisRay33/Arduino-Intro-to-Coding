//Using Arduino Sensor Kit
//Code modified by Travis Ray

#include "Arduino_SensorKit.h"

#define BUTTON  4
#define LED 6

bool button_state;


void setup() {
  Serial.begin(9600);
  pinMode(BUTTON , INPUT);
  pinMode(LED, OUTPUT);

  digitalWrite(LED, LOW);  //Starts LED Off
}

void loop() {
  button_state = digitalRead(BUTTON);  //Stores button value 1=true=on, 0=false=off
  Serial.print("Button State is ");
  Serial.println(button_state);

  if (button_state == true) {   //If button is pressed
    digitalWrite(LED, HIGH);    //Turn on LED
  } 
  else {                        //Else (button is not pressed)
    digitalWrite(LED, LOW);     //Turn off LED
  }

  delay(100);
}
