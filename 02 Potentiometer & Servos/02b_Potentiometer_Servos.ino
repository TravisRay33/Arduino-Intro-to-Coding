/*

Example sketch 02

Potentiometer +Servomotor
*/

#include <Servo.h>    //Include Library
Servo servo1;         //Name the servo: servo1

int sensorPin = 0;    // The potentiometer is connected to analog pin 0                    
int Servomax = 180;   //maximum value the servo can take
int Potmax = 1023;    //maximum value the potentiometer can take
float sensorValue;      //This is where we will store the potentiometer's value. float indicates it can be a decimal.

void setup(){ // this function runs once when the sketch starts up
  servo1.attach(9);
  servo1.write(90);// move servos to center position -> 90°
  //Serial.begin(9600);
}


void loop(){ // this function runs repeatedly after setup() finishes

  sensorValue = analogRead(sensorPin) * Servomax/Potmax; 
   // Serial.println(sensorValue); 
  servo1.write(sensorValue);
   delay(500);
}

