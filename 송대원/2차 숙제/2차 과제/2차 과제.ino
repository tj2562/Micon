void setup(){
  pinMode(2, INPUT_PULLUP);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop(){
  int sw = digitalRead(2);

  if(sw == LOW) 
  {
    digitalWrite(13, HIGH);
    delay(600);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(600);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    delay(600);
    digitalWrite(11, LOW);
  }
  else 
  {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
}
