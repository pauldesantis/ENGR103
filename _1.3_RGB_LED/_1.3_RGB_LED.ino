int RedPin = 3;    // RED pin of the LED to PWM pin 4
int GreenPin = 5;  // GREEN pin of the LED to PWM pin 5
int BluePin = 6;   // BLUE pin of the LED to PWM pin 6
int brightness = 0; // LED brightness
int increment = 5;  // brightness increment
int color = 1;    // cycles through color


void setup() {
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
/* brightness = brightness + increment;  // increment brightness for next loop iteration
if (brightness <= 0 || brightness >= 255)    // reverse the direction of the fading
  {
    increment = -increment;
  }
  brightness = constrain(brightness, 0, 255);
  */
switch (color) {
  case 1: // red
  analogWrite(RedPin,0);
  analogWrite(GreenPin,255);
  analogWrite(BluePin,255);
  color++;
  break;
  case 2: // orange / yellow
  analogWrite(RedPin,0);
  analogWrite(GreenPin,150);
  analogWrite(BluePin,255);
  color++;
  break;
  case 3: // Green
  analogWrite(RedPin,255);
  analogWrite(GreenPin,0);
  analogWrite(BluePin,255);
  color++;
  break;
  case 4: // Blue
  analogWrite(RedPin,255);
  analogWrite(GreenPin,255);
  analogWrite(BluePin,0);
  color++;
  break;
  case 5: // Indigo
  analogWrite(RedPin,150);
  analogWrite(GreenPin,255);
  analogWrite(BluePin,0);
  color++;
  break;
  case 6: // Purple / Violet
  analogWrite(RedPin,0);
  analogWrite(GreenPin,255);
  analogWrite(BluePin,0);
  color++;
  break;
  case 7:
  color = 1;
  break;
}
delay(2000);
}
