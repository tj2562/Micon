 
void setup(){
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(11,OUTPUT);
}

void loop(){
  for(int value=0; value<=255; value++){
    analogWrite(11,value);
    delay(50);
}
  for(int value=255; value>=0; value--){
    analogWrite(11,value);
    delay(50);
}



}
