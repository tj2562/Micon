#include <Servo.h>
Servo myServo;
int ledG = 9;
int ledR = 10;
int on = 90;//초록불일때 모터 각도
int off = 0;//빨간불일때 모터 각도
int sw;//스위치
int ledGVal;//초록불 값(0또는 1)
int pace = 15;//건널목 열고 닫히는 속도


void setup() {
  myServo.attach(8);
  pinMode(7,INPUT_PULLUP);
  pinMode(ledG,OUTPUT);
  pinMode(ledR,OUTPUT);
  //빨간불인 상태로 초기화
  digitalWrite(ledG,LOW);
  digitalWrite(ledR,HIGH);
  myServo.write(off);
  Serial.begin(9600);
  while(!Serial);
}

void loop() {
  sw = digitalRead(7);
  ledGVal = digitalRead(9);
  
  if(!sw){
    if(ledGVal==HIGH){               //초록불이면 빨간불, 모터값 0으로 변환
      digitalWrite(ledG,LOW);
      digitalWrite(ledR,HIGH);
      for(int i=on; i>=off; i--){
      myServo.write(i);
      delay(pace);
      }
      delay(15);
    }
    else{                            //빨간불이면 초록불, 모터값 90으로 변환
      digitalWrite(ledG,HIGH);
      digitalWrite(ledR,LOW);
      for(int i=off; i<=on; i++){
      myServo.write(i);
      delay(pace);
      }
      delay(15);
    }
  }
  
}
