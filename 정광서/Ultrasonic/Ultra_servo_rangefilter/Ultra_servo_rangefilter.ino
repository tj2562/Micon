#include <Servo.h>
Servo myservo; //서보모터 객체 생성
int pos = 10; // 일단 서보모터 각도를 10으로 맞춘다.
int echoPin = 7;
int trigPin = 8;
float duration;
float distance;

int prevDistance = 0;

void setup() 
{
  myservo.attach(9); //서보모터 핀번호를 9번으로 설정
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // echoPin 이 HIGH를 유지한 시간을 저장
  distance = ((float)(340 * duration) / 10000) / 2; // 거리 계산
  
  /*// 측정된 거리 값를 시리얼 모니터에 출력
  28 2900 -> 28 28 -> 0    28     50    50
                     prev dist
                          prev   dist   
                                 prev    dist */
  if(distance >= 2500) distance = prevDistance;
  Serial.println(distance);

  // 측정된 거리가 10cm 이하라면, Servo 90도 회전
  
  if (distance < 10) 
  {
    pos = 90;
    myservo.write(pos);
    delay(10);
  }
  // 측정된 거리가 10cm 이상이라면, Servo -80도 회전
  else 
  {
    pos = 10;
    myservo.write(pos);
  }
  // 0.2초 동안 대기
  delay(10);
  prevDistance = distance;
}
