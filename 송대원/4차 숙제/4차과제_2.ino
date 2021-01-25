#include <Servo.h>

Servo myServo;

void setup(){
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  myServo.attach(5);
}

void loop(){
  int sw = digitalRead(13);

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);

  if(!sw){
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    myServo.write(90);
    //delay(50);
  }
  else{
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    myServo.write(0);
    //delay(50);
  }
}
