
int FLASH=13;
int click=2000; 
void setup(){
  pinMode(FLASH,OUTPUT);
  pinMode(2,INPUT_PULLUP); 
  int click=2000; //여기서 선언된 click은 지역 변수로 위에서 선언한 click과는 다른 변수가 됨. 즉 setup 함수가 끝나면 소멸 
}

void loop(){
  int sw=digitalRead(2);
  if(!sw){
    click=click-400;//click이 음수가 될 경우 0으로 처리하면 좋을것 같음.
  }
    digitalWrite(FLASH,HIGH);  
    delay(click);             
    digitalWrite(FLASH,LOW);
    delay(click);
    //코드 깔끔 good
}
