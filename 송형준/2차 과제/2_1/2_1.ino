int YELLOW_Pin = 8;
int BLUE_Pin = 9;
// 색으로 핀설정 good
void setup() 
{
  pinMode(2, INPUT_PULLUP);
  pinMode(YELLOW_Pin, OUTPUT);
  pinMode(BLUE_Pin, OUTPUT);
}
void loop() {
  int sw = digitalRead(2);
  if(!sw) //! 사용 good
  {
    digitalWrite(YELLOW_Pin,HIGH);
    digitalWrite(BLUE_Pin, LOW);
  }
  else
  {
    digitalWrite(YELLOW_Pin,LOW);
    digitalWrite(BLUE_Pin, HIGH);
   
  }
}
