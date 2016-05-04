const int triggerPin = 2; //Sets the trigger pin on the Sensor
const int echoPin = 5; //Sets the echo pin on the Sensor

void setup()
{
 Serial.begin(9600);  // Sets up the Serial Port
}

void loop()
{
  // triggerPin is used to send out signal
  // Prime with LOW output, then test with HIGH
 pinMode(triggerPin, OUTPUT);
 digitalWrite(triggerPin, LOW);
 delayMicroseconds(2);
 digitalWrite(triggerPin, HIGH);
 delayMicroseconds(5);
 digitalWrite(triggerPin, LOW);
 
   // echoPin receives input based on signal
 pinMode(echoPin, INPUT);
 int duration = pulseIn(echoPin, HIGH);
 
 int inches = microsecondsToInches(duration);
 int cm = microsecondsToCentimeters(duration);
 int feet = microsecondsToCentimeters(duration);
 
 Serial.print(feet);
 Serial.print("feet, ");
 Serial.print(inches);
 Serial.print("in, ");
 Serial.print(cm);
 Serial.print("cm");
 Serial.println();
 
 delay(100);
}

long microsecondsToInches(long microseconds)
{
  return microseconds / 74 / 2;  
}


long microsecondsToFeet(long microseconds)
{
  return microseconds / 74 / 2 / 12;
}

long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;  
}
