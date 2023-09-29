/*
RGB LED
  Make an RGB LED display many colors!

By:Travis Ray for use at NIS 
*/


#define RED_PIN 9   
#define GREEN_PIN 10
#define BLUE_PIN 11

int DISPLAY_TIME = 100;  

//-----------------------------------------------------------------------------------//


void setup()
{
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

//-----------------------------------------------------------------------------------//

void loop()
{
  redLights();
  //greenLights();
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

}

