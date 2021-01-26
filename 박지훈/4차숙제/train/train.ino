#include <Servo.h>
Servo myServo;
int light;
int angle;
void setup(){
  myServo.attach(5);
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(2,INPUT_PULLUP);
}

void loop(){
  int sw=digitalRead(2);
  
if(!sw){
  for(light=0;light<255;light++){
    angle=map(light,0,255,0,90);
    analogWrite(11,255-light);
    analogWrite(10,light);
    myServo.write(angle);       
  }
}
else{
    analogWrite(11,255);
    analogWrite(10,0);
    myServo.write(LOW);   
   
  }
  delay(1000);
}
