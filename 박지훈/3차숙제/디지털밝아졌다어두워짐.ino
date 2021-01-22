 
void setup(){
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(11,OUTPUT);
}

void loop(){
  for(int value=0; value<=255; value++){
    digitalWrite(11,HIGH);
    delayMicroseconds(value);
    digitalWrite(11,LOW);
     delayMicroseconds(255-value);
     delay(10);
}
  for(int value=255; value>=0; value--){
  digitalWrite(11,HIGH);
    delayMicroseconds(value);
    digitalWrite(11,LOW);
     delayMicroseconds(255-value);
     delay(10);
}



}
