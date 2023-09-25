//Travis Ray

#include "Arduino_SensorKit.h"

#define BUTTON  4
#define LED 6

bool button_state;


void setup() {
  Serial.begin(9600);

  pinMode(BUTTON , INPUT);
  pinMode(LED, OUTPUT);

  digitalWrite(LED, LOW);

}

void loop() {
  button_state = digitalRead(BUTTON);
  Serial.print("Button State is ");
  Serial.println(button_state);

  if (button_state == true) {
    digitalWrite(LED, HIGH);
  } 
  else {
    digitalWrite(LED, LOW);
  }

  delay(100);
}
