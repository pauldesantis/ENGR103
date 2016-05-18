/* -----------------------------------
The following code can be used to test 
that your RGB LED is functioning 
correctly. 

For common anode LEDs, be sure that the
long pin is connected to 5 volts, and
other three pins are connected to a
resistor and then their corresponding
pin on the board.

A correctly wired circuit will cycle
through a full spectrum of color. 
------------------------------------- */

#define GREEN 5 // Green goes to pin 5
#define BLUE 6  // Blue goes to pin 6
#define RED 3   // Red goes to pin 3
#define delayTime 20

void setup() {

  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);

}

int redVal;
int blueVal;
int greenVal;
 
void loop() {
 
  int redVal = 255;
  int blueVal = 0;
  int greenVal = 0;
  for( int i = 0 ; i < 255 ; i += 1 ){
    greenVal += 1;
    redVal -= 1;
    analogWrite( GREEN, 255 - greenVal );
    analogWrite( RED, 255 - redVal );

    delay( delayTime );
  }
 
  redVal = 0;
  blueVal = 0;
  greenVal = 255;
  for( int i = 0 ; i < 255 ; i += 1 ){
    blueVal += 1;
    greenVal -= 1;
    analogWrite( BLUE, 255 - blueVal );
    analogWrite( GREEN, 255 - greenVal );

    delay( delayTime );
  }
 
  redVal = 0;
  blueVal = 255;
  greenVal = 0;
  for( int i = 0 ; i < 255 ; i += 1 ){
    redVal += 1;
    blueVal -= 1;
    analogWrite( RED, 255 - redVal );
    analogWrite( BLUE, 255 - blueVal );

    delay( delayTime );
  }
}
