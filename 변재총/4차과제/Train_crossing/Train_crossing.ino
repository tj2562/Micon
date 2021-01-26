#include <Servo.h>
#define RED 7
#define GRE 6

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(5);
  pinMode(8,INPUT_PULLUP);
  pinMode(RED,OUTPUT);
  pinMode(GRE,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(0);//0에서 시작
  int sw = digitalRead(8);//스위치 읽기
  if(sw==LOW){//켜지면
    digitalWrite(GRE,HIGH);//초록불
    digitalWrite(RED,LOW);//빨간불 해제
    for(int a=1;a<=90;a++){//서보 0부터 90도까지
      myServo.write(a);//조정
      delay(10);//부드럽게
      if(a==90){//90도까지갔는데도 눌려있으면
      while(!digitalRead(8));//계속 90도 유지&초록불 유지
      }
    }
    digitalWrite(GRE,LOW);//스위치 손때면 실행됨
    digitalWrite(RED,HIGH);
    for(int a=89;a>=0;a--){//90~0도로 내려오면서 빨간불
      myServo.write(a);
      delay(10);//부드럽게
    }
  }
}
