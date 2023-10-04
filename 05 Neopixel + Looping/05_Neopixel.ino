// NeoPixel Sketch
//Created by Travis Ray for use at Nebraska Innovation Studio

#include <Adafruit_NeoPixel.h>

#define PIN 6  // On Trinket or Gemma, suggest changing this to 1
#define NUMPIXELS 50  // Popular NeoPixel ring size

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 100  

void setup() {
  pixels.begin();  // INITIALIZE NeoPixel strip object (REQUIRED)
  Serial.begin(9600);
}

void loop() {
ManualControl();
//OneColor();
//OneColorMotion(1000); //The number is how long a delay between lights
//GRalternate();
//GRalternateV2();
//GRBrandom();
//Sweep(); //Student Project
//RandomBrightness();  //Student Project
//Twinkle();  //Student Project
}

//------------------------------------------------------------------------------//
void ManualControl(){
  pixels.clear();       // Set all pixel colors to 'off'
  pixels.setPixelColor(0, pixels.Color(150,0,0));  //Green,Red,Blue  values 0-255
  pixels.show();      //Displays the pixels aka, actually turns lights on or off
  delay(1000);
}
/*
Challenges:
1. Can you make the first light Red?  Blue? 
2. Can you make the first light purple? Cyan? Yellow?
3. Can you make the first light white? off?
4. Can you make the first light pink? 
*/


//------------------------------------------------------------------------------//

void OneColor(){
  pixels.clear();
  pixels.show();
  for (int i=0; i<NUMPIXELS;i++){ //Loops from pixel #0, to #1, all the way up to NUMPIXELS
    pixels.setPixelColor(i,pixels.Color(0,150,0));  
   }
     pixels.show();
}
/*
Challenges:
1. Can you make all lights green? blue?
2. Can you make all lights purple? Cyan? Yellow?
3. Can you make all lights white?
4. Move pixels.show() into the for loop. What happens? Why?  Does our order matter?
*/

//------------------------------------------------------------------------------//

void OneColorMotion(int delayspeed){
  pixels.clear();
  pixels.show();
  for (int i=0; i<NUMPIXELS;i++){ //Loops from pixel #0, to #1, all the way up to NUMPIXELS
    pixels.setPixelColor(i,pixels.Color(0,150,0));
    pixels.show();
    delay(delayspeed);
  }
 
}
/*
Challenges:
1. Can you make the lights blue?
2. Can you make the lights move faster?
3. Move pixels.show() outside of the for loop. What happens? Why? 
4. Move delay(delayspeed) outside of the for loop, next to pixels.show().   What happens? Why? 

*/

//------------------------------------------------------------------------------//

void GRalternate() {
  for (int i = 0; i < NUMPIXELS; i++) {  

    if (i % 2 == 0) {  //If i divides by 2 and gives remainder of 0 (aka is even)
      pixels.setPixelColor(i, pixels.Color(150, 0, 0));
    } 
    else if (i % 2 == 1) { //else if number divides by 2 with remainders 1 (aka is odd)
      pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    }
    pixels.show();    
    delay(DELAYVAL);  
  }
}
/*
Challenges:
1. The first light should be green. Can you change the code so the pattern starts red?
2. Can you make a Nebraska themed light? (Red-white)
3. Can you make every-other light off? 
*/

//------------------------------------------------------------------------------//
void GRalternateV2() {
       for (int i = 0; i < NUMPIXELS; i++) {   //Starts with Green-Red

        if (i % 2 == 0) {
          pixels.setPixelColor(i, pixels.Color(150, 0, 0));
        } else if (i % 2 == 1) {
          pixels.setPixelColor(i, pixels.Color(0, 150, 0));
        }
        pixels.show();    
        delay(DELAYVAL);  
      }

      for (int i = 0; i < NUMPIXELS; i++) {  // Starts with Red-Green
        if (i % 2 == 0) {
          pixels.setPixelColor(i, pixels.Color(0,150, 0));
        } else if (i % 2 == 1) {
          pixels.setPixelColor(i, pixels.Color(150,0, 0));
        }
        pixels.show();    
        delay(DELAYVAL);  
      }
}
/*
Challenges:
1. Can you make a Nebraska themed light? (Red-white)
2. Can you make a bright blue-dark blue combination?
3. Can you make an White - off combination? 
*/

  //------------------------------------------------------------------------------//

  void GRBrandom() {
    for (int i = 0; i < NUMPIXELS; i++) {  // For each pixel...
      int mynum = random(1, 4);

      if (mynum % 3 == 0) {
        pixels.setPixelColor(i, pixels.Color(150, 0, 0));
      } else if (mynum % 3 == 1) {
        pixels.setPixelColor(i, pixels.Color(0, 150, 0));
      } else if (mynum % 3 == 2) {
        pixels.setPixelColor(i, pixels.Color(0, 0, 150));
      }
    

    pixels.show();    // Send the updated pixel colors to the hardware.
    delay(DELAYVAL);  // Pause before next pass through loop
    }
  }
/*
Challenges:
1. Add a fourth option for white. 
2. Add a fifth option for off. 
*/

    //------------------------------------------------------------------------------//
void Sweep(){
//Create a code that sweeps through combinations of Red, Blue, and Green
//First loop, slowly increases red
} 

void RandomBrightness(){
//Create a code that gives a random brightness value for each light
}

void Twinkle(){
//Create a code that creates a twinkle effect. 
//All lights should be blue, but randomly some lights will be changed to white
}