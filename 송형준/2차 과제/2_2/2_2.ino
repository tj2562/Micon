int LED = 8;
int Button = 2;
int count = 1000;

void setup()
{
 pinMode(LED, OUTPUT);
 pinMode(Button, INPUT_PULLUP);
 digitalWrite(LED,LOW);
}

void loop() 
{
  int sw = digitalRead(Button);
  
  if(sw == LOW)
  {
    count = count -100;
    if(count == 0)
    {
      count = 1000; // 카운트를 다시 초기화 시켜주는 코드 good
    }
  }
  digitalWrite(LED, HIGH);
  delay(count);
  digitalWrite(LED, LOW);
  delay(count);
}
//회로 잘 연결했는데, 문제는 없지만 그라운드 라인은 -(파란색)라인을 사용하시면 좋을것같아요
