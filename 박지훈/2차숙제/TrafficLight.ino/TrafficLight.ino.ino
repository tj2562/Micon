int Rled=13,Yled=12,Gled=11;
//
void setup(){
  pinMode(Rled,OUTPUT);
  pinMode(Yled,OUTPUT);
  pinMode(Gled,OUTPUT);
  pinMode(2,INPUT_PULLUP); 
}

void loop(){
  int sw=digitalRead(2);
  digitalWrite(Rled,HIGH); 
  if(!sw){ 
    digitalWrite(Rled,LOW);  
    digitalWrite(Yled,HIGH); 
    delay(2000);             
    digitalWrite(Yled,LOW);  
    digitalWrite(Gled,HIGH); 
    delay(4000);             
    digitalWrite(Gled,LOW);  
  }
}
