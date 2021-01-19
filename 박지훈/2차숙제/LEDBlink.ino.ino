
int FLASH=13;
int click=2000; 
void setup(){
  pinMode(FLASH,OUTPUT);
  pinMode(2,INPUT_PULLUP); 
  int click=2000;
}

void loop(){
  int sw=digitalRead(2);
  if(!sw){
    click=click-400;
  }
    digitalWrite(FLASH,HIGH);  
    delay(click);             
    digitalWrite(FLASH,LOW);
    delay(click);
}
