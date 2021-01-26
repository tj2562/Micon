//가변저항 이용해 서보모터 조절

#include<Servo.h>

Servo myServo;

int potPin=A0;
int potVal;
int angle;

void setup() {
  myServo.attach(5);
  Serial.begin(9600);
}

void loop() {
  potVal=analogRead(potPin);
  Serial.print("potVal:");
  Serial.print(potVal);

  angle=map(potVal,0,1023,0,179);
  Serial.print(",angle:");
  Serial.println(angle);

  myServo.write(angle);
  delay(15);
}
