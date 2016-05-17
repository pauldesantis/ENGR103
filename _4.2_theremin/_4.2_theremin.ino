const int triggerPin = 2; //Sets the trigger pin on the Sensor
const int echoPin = 6; //Sets the echo pin on the Sensor
int button = 12; // sets pin for button
int buzzer = 9;  // Passive buzzer
int frequency;

void setup()
{
 Serial.begin(9600);  // Sets up the Serial Port
 pinMode(button, INPUT);
 digitalWrite(button, HIGH);
 pinMode(buzzer ,OUTPUT);
 
}

void loop()
{
 // triggerPin is used to send out signal
 // Prime with LOW output, then test with HIGH
 pinMode(triggerPin, OUTPUT);
 digitalWrite(triggerPin, LOW);
 delay(2);
 digitalWrite(triggerPin, HIGH);
 delay(5);
 digitalWrite(triggerPin, LOW);

 // echoPin receives input based on signal
 pinMode(echoPin, INPUT);
 int duration = pulseIn(echoPin, HIGH);

 if (digitalRead(button) == LOW){
 
 if(duration>1600){
  frequency = 880;
 }
 else if(duration<200){
  frequency = 260; 
 }
 else{
  frequency = map(duration, 260, 1600, 260, 880);
 }


 Serial.println(frequency);
 
 tone(buzzer,frequency);
 delay(1);
 }
 
 else{
 noTone(buzzer);
 }
 }
 
