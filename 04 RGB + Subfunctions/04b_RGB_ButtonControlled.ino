/*
RGB LED
  Make an RGB LED display many colors!

By:Travis Ray for use at NIS 
*/


#define RED_PIN 9   
#define GREEN_PIN 10
#define BLUE_PIN 11

#define BUTTON_PIN 5 

int CurrentState = 1;
int DISPLAY_TIME = 100;  

//-----------------------------------------------------------------------------------//


void setup()
{
  Serial.begin(9600); //Do not change
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);  //Button connected to digital 5. 
}

//-----------------------------------------------------------------------------------//

void loop()
{
  if (digitalRead(BUTTON_PIN) == LOW)  {
    CurrentState = CurrentState +1;
    //CurrentState +=1;
    delay(1000);
  }


  if (CurrentState ==1) {
  redLights();
  }
  else if (CurrentState ==2) {
    greenLights();
  }
  //blueLights();
  //purpleLights(); //Red&Blue
  //yellowLights(); //Red&Green
  //cyanLights(); //Green&Blue
  //whiteLights(); //All three colors
  //offLights();


delay(DISPLAY_TIME);
}

//-----------------------------------------------------------------------------------//
void redLights()
{
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
}

void greenLights()
{
 digitalWrite(RED_PIN, LOW);
 digitalWrite(GREEN_PIN, HIGH);
 digitalWrite(BLUE_PIN, LOW);
}

void blueLights()
{
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
}

void purpleLights() //Red&Blue
{
    digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
}
void yellowLights() //Red&Green
{
    digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
}
void cyanLights() //Green&Blue
{
    digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
}
void whiteLights() //All three colors
{  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
}
void offLights()
{
    digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
}
