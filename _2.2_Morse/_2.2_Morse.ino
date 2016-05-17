String ch ;
int dotTime = 50 ;
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
      wait() ;
      break ;
      
      case 'b':
      dash() ;
      dot() ;
      dot() ;
      dot() ;
      wait() ;
      break ;
      
      case 'c':
      dash() ;
      dot() ;
      dash() ;
      dot() ;
      wait() ;
      break ;
      
      case 'd':
      dash();
      dot();
      dot();
      wait() ;
      break ;
      
      case 'e':
      dot();
      wait() ;
      break ;
      
      case 'f':
      dot();
      dot();
      dash();
      dot();
      wait() ;
      break ;

      case 'g':
      dash();
      dash();
      dot();
      wait() ;
      break ;
      
      case 'h':
      dot();
      dot();
      dot();
      dot();
      wait() ;
      break ;

      case 'i':
      dot();
      dot();
      wait() ;
      break ;

      case 'j':
      dot();
      dash();
      dash();
      dash();
      wait() ;
      break ;
      
      case 'k':
      dash();
      dot();
      dash();
      wait() ;
      break ;

      case 'l':
      dot();
      wait() ;
      break ;

      case 'm':
      dash();
      dash();
      wait() ;
      break ;

      case 'n':
      dash();
      dot();
      wait() ;
      break ;

      case 'o':
      dash();
      dash();
      dash();
      wait() ;
      break ;

      case 'p':
      dot();
      dash();
      dash();
      dot();
      wait() ;
      break ;

      case 'q':
      dash();
      dash();
      dot();
      dash();
      wait() ;
      break ;

      case 'r':
      dot();
      dash();
      dot();
      wait() ;
      break ;

      case 's':
      dot();
      dot();
      dot();
      wait() ;
      break ;

      case 't':
      dash();
      wait() ;
      break ;

      case 'u':
      dot();
      dot();
      dash();
      wait() ;
      break ;

      case 'v':
      dot();
      dot();
      dot();
      dash();
      wait() ;
      break;
      
      case 'w':
      dot();
      dash();
      dash();
      wait() ;
      break ;

      case 'x':
      dash();
      dot();
      dot();
      dash();
      wait() ;
      break ;

      case 'y':
      dash();
      dot();
      dash();
      dash();
      wait() ;
      break ;

      case 'z':
      dash();
      dash();
      dot();
      dot();
      wait() ;
      break ;
      
      case ' ':
      delay(7*dotTime) ;
      break ;
    }
  }
  
 }
}
