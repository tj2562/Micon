//스위치를 누르면 서보모터 회전, 신호 바꾸기

#include<Servo.h>

Servo myServo;
int i;
int green=10;
int red=11;

void setup() {
  myServo.attach(5);
  Serial.begin(9600);
  pinMode(3,INPUT_PULLUP);
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);
}

void loop() { 
  digitalWrite(green,HIGH);
  myServo.write(0);
 
  int sw=digitalRead(3);
  if(!sw){
    digitalWrite(green,LOW);
    digitalWrite(red,HIGH);
    
    for(i=0;i<90;i++){ //모터 속도 제어
    myServo.write(i);
    delay(10);
    }
    for(i=90;i>0;i--){
    myServo.write(i);
    delay(10);
    }
    digitalWrite(red,LOW);
  }
}
