#include <Servo.h>


int Yled=5;
int Bled=6;
int bnt=2;
Servo Servo1;
int potval;
int angle[8]={0,10,25,50,65,70,80,90};
void setup() {
  // put your setup code here, to run once:
  Servo1.attach(3);
  Serial.begin(9600);
  while(!Serial);
  Serial.println("gunnojima");
  pinMode(bnt,INPUT_PULLUP);
  pinMode(Yled,OUTPUT);
  pinMode(Bled,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
   Servo1.write(0);
   delay(1000);
   digitalWrite(Yled,HIGH);
   digitalWrite(Bled,LOW);


   if(digitalRead(bnt)==LOW)
   {
      delay(20);
    
      Servo1.write(90);
      delay(400);
  /*
      for(int i=0;i<3;i++)
      {
        Servo1.write(angle[i]);
        delay(40);
      }
      for(int i=3;i>=3&&i<=4;i++)
      {
        Servo1.write(angle[i]);
        delay(80);
        
      }
      for(int i=5;i>=5&&i<8;i++)
      {
        Servo1.write(angle[i]);
        delay(40);
        
      }  */                         ///부드럽게를 시도해 보았지만 딜레이 주는게 더 부드러운 것 같아서.....  
      delay(200);
      digitalWrite(Yled,LOW);
      digitalWrite(Bled,HIGH);      /////파란불=건너시오
      Serial.println("Gunnoga");    ////친절해라
      delay(10000);                 ////신호대기 시간
      
   }
   else 
   {
     Servo1.write(0);
     delay(1000);
     digitalWrite(Yled,HIGH);
     digitalWrite(Bled,LOW);
     Serial.println("gunnojima");
   }
}
