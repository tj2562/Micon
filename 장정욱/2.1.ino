void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP); //내부저항 사용
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int sw = digitalRead(2);            // HIGH(1) 눌x, LOW(0) 눌
  
  int color = 0;

  if(sw==1)
  {
  
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
  }
  
  else
  color++;
                    
  if(color%3 ==1 )     
    {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    delay(600);

    
    digitalWrite(13,LOW); 
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    delay(600);

    
  digitalWrite(11,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(600);
}
}

//0.6 초 동안 신호등
