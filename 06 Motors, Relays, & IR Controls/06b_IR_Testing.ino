#include <IRremote.h>

#define IR_RECEIVE_PIN 12

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
}

void loop() {
  if (IrReceiver.decode()) {  //Checks if any button has been pressed
    IrReceiver.resume();      //Tells the receiver to 
    Serial.println(IrReceiver.decodedIRData.command);
  }
}

/*Open the Serial Monitor
1. Press each button on the remote control
2. Record what number each button produces
Row 1 # # #
Row 2
Row 3
Row 4 
Row 5
Row 6
Row 7


challenges:
1. Create a code that turns the stepper motor clockwise (press |<<) or counterclockwise (press >>| )
2. Modify that code so that the up/down buttons  increase/descrease speed
*/
