

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP); //내부저항 사용
  pinMode(13, OUTPUT);

}

int flash = 1;

void loop() {
int sw = digitalRead(2);            // HIGH(1) 눌x, LOW(0) 눌

if(sw==0)
flash*=2;
/*
if(sw==0)
  flash*=2;   조건문 안의 코드는 들여쓰기를 이용해야 가독성이 좋음
*/

digitalWrite(13,HIGH);
delay(2000/flash);
  
digitalWrite(13,LOW);
delay(100);
  
if(flash>20)
flash=2;
}
