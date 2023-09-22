/*

Example sketch 02

Potentiometer + variables/serial monitor
*/


int sensorPin = 0;    // The potentiometer is connected to analog pin 0                    
int ledPin = 13;      // The LED is connected to digital pin 13
int sensorValue;      //This is where we will store the potentiometer's value


void setup(){ // this function runs once when the sketch starts up

  pinMode(ledPin, OUTPUT); //instead of utlizeing pinMode(13,OUPTUT) like last week, we can use the more common sense word of ledpin
 // Serial.begin(9600);
}


void loop(){ // this function runs repeatedly after setup() finishes

  sensorValue = analogRead(sensorPin); 
  //Serial.print(sensorValue);  
  //Serial.println(sensorValue); 
  digitalWrite(ledPin, HIGH);     // Turn the LED on
  delay(sensorValue);             // Pause for sensorValue amount of time 
  digitalWrite(ledPin, LOW);      // Turn the LED off
  delay(sensorValue);             // Pause for sensorValue amount of time
}

