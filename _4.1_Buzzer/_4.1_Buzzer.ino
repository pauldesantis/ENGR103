int x = 3;        // number of times active buzzer runs
int active = 13;  // Active buzzer
int passive = 9;  // Passive buzzer
 
void setup() {
  pinMode(active,OUTPUT); // active buzzer
  pinMode(passive ,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  switch(x){
     // active buzzer
    case 1:
      // active buzzer
      digitalWrite(active,HIGH);
      delay(1000);
      digitalWrite(active,LOW);
      delay(1000);
      break;
      
    // passive buzzer digital
    case 2: 
      unsigned char i, j;
      while (1) {
         for (i = 0; i <80; i++){ // Wen a frequency sound
              digitalWrite (passive, HIGH) ;// send voice
              delay (1) ;// Delay 1ms
              digitalWrite (passive, LOW) ;// do not send voice
              delay (1) ;// delay ms
              }
         for (j = 0; j <100; j++){ // Wen Qie out another frequency sound 
              digitalWrite (passive, HIGH) ;// send voice
              delay (2) ;// delay 2ms
              digitalWrite (passive, LOW) ;// do not send voice
              delay (2) ;// delay 2ms
          }
          
      }
      break;
      
      // passive buzzer tone
     case 3:
     int k;
     for(k = 200; k<=800; k= k+5){
        tone(passive,k);
        delay(250);
        Serial.print("k = ");
        Serial.println(k);
        delay(5);
      }
       for(k = 800; k>=200; k= k-5){
        tone(passive,k);
        delay(250);
        Serial.print("k = ");
        Serial.println(k);
        delay(5);
       }
      delay(1000);
      
      break;
      }
       
  }

