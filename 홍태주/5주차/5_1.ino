#include <Servo.h>
Servo myservo;
int pos;
int echoPin = 7;
int trigPin = 8;
float duration;
float distance;
int prev_distance = 50;
int ledG = 11;
int bright = 0; // led 밝기
const int numReading = 10; // 이동 평균 필터 배열의 개수, 값을 여러번 바꿔봤는데 10이 적당한것 같았습니다
int reading[numReading];
int total; // 이동 평균 필터 배열 원소들의 합
int index = 0;
int average = 0; // 이동 평균 필터 배열 원소들의 평균


void setup() {
  
  Serial.begin(9600);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  myservo.attach(9);
  for(int thisReading = 0; thisReading<numReading; thisReading++){
    reading[thisReading]=0; // 이동 평균 필터 배열 원소들을 0으로 초기화
  }
  while(!Serial);
  
}


void loop() {
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = ((float)(343 * duration) / 10000) / 2;
  
  if (distance>=prev_distance+10 && distance<=prev_distance-10 && distance>=1000){
    distance = prev_distance; // 노이즈 제거를 위해 순간적으로 거리값이 차이가 많이 나면 이전값을 사용하도록 설정
  }
  int nowInput = distance;
  total = total - reading[index]; // 가장 먼저 있던 값 총합에서 제외
  reading[index] = nowInput;
  total = total + nowInput; // 새로 읽은 값 총합에 포함
  index = index + 1; // 인덱스 증가

  if(index >= numReading){
    index = 0;
  }

  average = total/numReading;
  
  Serial.print(distance);
  Serial.print(", ");
  Serial.println(average);

  if (average<=10){
    pos = 90;
    myservo.write(pos);
    bright = map(average, 0, 10, 0, 255); // 10cm 미만을 감지하면 거리값을 led 밝기로 환산
    analogWrite(ledG,255-bright); // 센서가 10cm 미만을 감지하면 가까워질수록 led가 밝아지게 설정
    delay(10);
  }

  else{
    pos = 10;
    myservo.write(pos);
    digitalWrite(ledG,LOW); // 평상시에는 led가 켜져있음
    delay(10);
  }

  prev_distance = average;

}
