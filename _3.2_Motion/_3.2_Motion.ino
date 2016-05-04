const int led = 13;
const int sensor = 12;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);  
}

void loop()
{
  if (digitalRead(sensor) == HIGH)
  {
    digitalWrite(led, LOW);
    delay(300);
    digitalWrite(led, HIGH);
    delay(10);
  }
  else
  {
    digitalWrite(led,LOW);
  }  
  
delay (500);

}

// GRD to GRD
// VCC to 5V
// OUT to Pin
