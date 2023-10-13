//Travis Ray
//For use at Nebraska Innovation Studio


#include <Stepper.h>

const int stepsPerRevolution =2048; //2048;  // The number of steps per revolution
const int RPM = 8;         // Adjustable range of 0-17 rpm

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myStepper.setSpeed(RPM);
  // initialize the serial port:
  Serial.begin(9600);
}

//---------------------------------------------------------------//
void loop() {  
Alternate();
//Speedup();
//Slowdown();
}

//---------------------------------------------------------------//
void Alternate(){
    Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}
/*
Challenges:
1. Can you make it run slower? faster?
2. Can you make it turn only half a rotation? 
*/

//---------------------------------------------------------------//
void Speedup(){
  for (int myspeed=1;myspeed<17;myspeed=myspeed+3){
    Serial.print("My current speed is: ");
    Serial.println(myspeed);
     myStepper.setSpeed(myspeed);
     myStepper.step(stepsPerRevolution);
  }
}
/*
Challenges:
1. Can you make it run at only odd number speeds (1,3,5,7,9,11,13,15)
*/

//---------------------------------------------------------------//
void Slowdown(){
//Create a for loop that starts the motor fast and slows it down
}
