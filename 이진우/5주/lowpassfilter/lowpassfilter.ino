//lowpassfilter 사용

int echoPin = 7;
int trigPin = 8;
float duration;
float distance;
int prev_distance = 50;
int filt_distance = 50;
float alpha = 0.4; //민감도 0.4 설정

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
  
  // lowpassfilter
  if(distance >= 2000) distance = prev_distance;
  filt_distance = prev_distance * (1 - alpha) + distance * alpha; 
  
  Serial.print(distance);
  Serial.print(",");
  Serial.println(filt_distance); 
  
  prev_distance = distance;
}
