#include<Servo.h>
Servo myServo;
int sw=4;
int LED_5=5;
int LED_6=6;
int count;
void setup()
{ 
  pinMode(LED_5,OUTPUT);
  pinMode(LED_6,OUTPUT);
  pinMode(sw,INPUT_PULLUP);
  digitalWrite(LED_5,LOW);
  digitalWrite(LED_6,LOW);
  Serial.begin(9600);
  count = 0;
  myServo.attach(7);
  }

void loop(){
  int SW = digitalRead(sw);
  if(SW == LOW){
    count = count + 1;
    delay(1000);
  }
  if (count % 2 ==0){
    digitalWrite(LED_5,HIGH);
    digitalWrite(LED_6,LOW);
    myServo.write(90);
    delay(1000);
  }
  else {
    digitalWrite(LED_5,LOW);
    digitalWrite(LED_6,HIGH);
    myServo.write(0);
    delay(1000);
  }
  
 
  


}
  
