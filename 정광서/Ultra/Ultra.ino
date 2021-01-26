

int pos = 10; // 일단 서보모터 각도를 10으로 맞춘다.
int echoPin = 7;
int trigPin = 8;
float duration;
float distance;


void setup() 
{
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
  // 측정된 거리 값를 시리얼 모니터에 출력
  Serial.println(distance);
  // 0.2초 동안 대기
  delay(10);
}
