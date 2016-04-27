int LED = 6 ;  
int val ;

void setup() {
  Serial.begin(9600) ;
  pinMode(LED, OUTPUT) ;
}

void loop() {
  if(Serial.available() > 0 ) {
    val = Serial.parseFloat() ;

    Serial.print("input ") ;
    Serial.println(val) ;

    for (int i=1; i<= val; i++) {
      analogWrite(LED,255) ;
      delay(200) ;
      analogWrite(LED,0) ;
      delay(200) ;
      Serial.println(i) ;
      
    }
    
  }
}
