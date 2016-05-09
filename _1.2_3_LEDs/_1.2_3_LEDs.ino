/*
  Blink with 3 LEDs
  Turns on LED1 on for one second, then LED1 off and LED2 on for one 
  second, then LED2 off and LED3 on for one second, then off repeatedly.

  LED1 is attached to digital pin 11
  LED2 is attached to digital pin 7
  LED3 is attached to digital pin 2
  
 */

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize 3 digital pins (11,7,&2) as outputs.
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(11, HIGH);   // turns LED1 on (HIGH is the voltage level)
  delay(1000);              // waits 1 second (1000 microseconds)
  
  digitalWrite(11, LOW);    // turns LED1 off
  digitalWrite(7, HIGH);    // turns LED2 on at the same instant LED1 turns off
  delay(1000);              // waits 1 second
  
  digitalWrite(7, LOW);     // turns LED2 off
  digitalWrite(2, HIGH);    // turns LED3 on
  delay(1000);              // waits 1 second
  digitalWrite(2, LOW);     // turns LED3 off
}
