/////moving average filter를 적용
#define num 20
float sensorValues[num];

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
 
  
  for(int i=0; i<num-1;i++)
  {
    sensorValues[i]=sensorValues[i+1];  //얻어진 데이터를 잎으로 땡겨 저장한다. 
  }
  sensorValues[num-1]=distance; //sensorValue[19]에 거리값을 저장한다. 
  float filterValue=0;
  for(int i=0; i<num; i++)
  {
    filterValue += sensorValues[i];
   
  }
  filterValue/=num; //20개의 누적 데이터 값의 평균을 구한다. 
  delay(10);

  Serial.print( sensorValues[num-1]);
  Serial.print(","); //여러값 플로팅
  Serial.println(filterValue); 
 
}
//////단점 값을 읽는게 느리다. 
