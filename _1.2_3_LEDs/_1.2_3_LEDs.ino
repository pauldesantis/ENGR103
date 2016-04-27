
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(11, LOW);
  //delay(1000)
  digitalWrite(7, HIGH);   
  delay(1000);
  digitalWrite(7,LOW);
  //delay(1000);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  //delay(1000)
}
