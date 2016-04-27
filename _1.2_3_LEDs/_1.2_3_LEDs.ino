<<<<<<< HEAD
=======
/*
  Blink with 3 LEDs
  Turns on LED1 on for one second, then LED1 off and LED2 on for one 
  second, then LED2 of and LED3 on for one second, then off repeatedly.

  LED1 is attached to digital pin 11
  LED2 is attached to digital pin 7
  LED3 is attached to digital pin 2
  
 */
>>>>>>> origin/master

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize 3 digital pins (11,7,&2) as outputs.
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
<<<<<<< HEAD
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(11, LOW);
  //delay(1000)
  digitalWrite(7, HIGH);   
=======
  digitalWrite(11, HIGH);   // turn the LED1 on by making the voltage HIGH
  delay(1000);              // wait for a second
  digitalWrite(11, LOW);    // turn the LED1 off by making the voltage LOW
  digitalWrite(7, HIGH);    
>>>>>>> origin/master
  delay(1000);
  digitalWrite(7,LOW);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
<<<<<<< HEAD
  //delay(1000)
=======
>>>>>>> origin/master
}
