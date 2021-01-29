//moving average filter 사용

#define window_size 50

int echoPin = 7;
int trigPin = 8;
float duration;
float distance = 0;
int index = 0;
int sum = 0;
int reading[window_size];
int avg_distance = 0;


void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // 거리 계산
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // echoPin 이 HIGH를 유지한 시간을 저장
  distance = ((float)(340 * duration) / 10000) / 2; 
  
  // moving average filter
  sum = sum - reading[index];
  reading[index] = distance;
  sum = sum + distance;
  index = (index + 1) % window_size;

  avg_distance = sum / window_size;
  
  Serial.print(distance);
  Serial.print(",");
  Serial.println(avg_distance); 
  
}
