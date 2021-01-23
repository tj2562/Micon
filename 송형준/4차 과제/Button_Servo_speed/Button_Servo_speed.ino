#include<Servo.h>
#include<util/delay.h>
Servo myServo;

int RED_LED = 13;
int BLUE_LED = 12;
int Button = 2;
int count = 0;
int Rotaion_Speed = 100;

void setup() 
{
  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(Button, INPUT_PULLUP);
  digitalWrite(RED_LED, HIGH);
  digitalWrite(BLUE_LED, LOW);
  myServo.attach(5);
  myServo.write(90);
  attachInterrupt(INT0, Button_State, FALLING);
}

void loop() 
{
}

void Button_State()
{
 _delay_ms(100);
 if(digitalRead(Button) == HIGH)
  return;
 
 digitalWrite(RED_LED, !digitalRead(RED_LED));
 digitalWrite(BLUE_LED, !digitalRead(BLUE_LED));
 
 if(digitalRead(RED_LED) == HIGH)
 {
  for(int angle=1; angle<=90; angle++)
  {
   myServo.write(angle);
   _delay_ms(Rotaion_Speed);
  }
 }
 
 if(digitalRead(RED_LED) == LOW)
 {
   for(int angle=90; angle>=0; angle--)
  {
   myServo.write(angle);
   _delay_ms(Rotaion_Speed);
  }
 }
}
