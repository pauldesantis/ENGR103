String ch ;

void setup() {
 Serial.begin(9600) ;
  
}

void loop() {
 if(Serial.available() > 0 ) {
  ch = Serial.readString() ;
  Serial.println(ch) ;

  for (int i=0; i<ch.length(); i++) {
    Serial.println(ch.charAt(i)) ;
    
    switch(ch.charAt(i)) {
      case 'a':
      Serial.println("123") ;
      break ;
      case 'b':
      Serial.println("456") ;
      break ;
    }
  }
  
 }
}
