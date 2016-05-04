String ch ;
int dotTime = 200 ;
int dashTime = 3*dotTime ;
int waitTime = dashTime ;
int LED = 5 ;


void setup() {
 Serial.begin(9600) ;
 pinMode(LED, OUTPUT) ;
 
}

void dot() {
  digitalWrite(LED, HIGH) ;
  delay(dotTime) ;
  digitalWrite(LED, LOW) ;
  delay(dotTime) ;
}

void dash() {
  digitalWrite(LED, HIGH) ;
  delay(dashTime) ;
  digitalWrite(LED, LOW) ;
  delay(dotTime) ;
}

void wait() {
  delay(waitTime) ;
}



void loop() {
 if(Serial.available() > 0 ) {
  ch = Serial.readString() ;
  Serial.println(ch) ;

  for (int i=0; i<ch.length(); i++) {
    Serial.println(ch.charAt(i)) ;
    
    switch(ch.charAt(i)) {
      case 'a':
      dot() ; 
      dash() ;
      dot() ;
      wait() ;
      break ;
      case 'b':
      dash() ;
      dash() ;
      dash() ;
      wait() ;
      break ;
    }
  }
  
 }
}
