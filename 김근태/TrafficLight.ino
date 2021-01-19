  int LED1=13;
  int LED2=12;
  int b=2;
  int count=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(b,INPUT_PULLUP); //버튼을 입력 형식으로 받기
}

void loop() {
  // put your main code here, to run repeatedly:

   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);

  if(digitalRead(b)==LOW)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    delay(600);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    delay(600);
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    delay(600);
  }
  ///////LED가 두개 밖에 없어서 마지막은 두개가 동시에 켜지는 걸로 진행하였습니다.

 

}
