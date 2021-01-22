int LED = 8;
int SWITCH = 2;

void setup() 
{
  pinMode(SWITCH, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() 
{
  int TIMES = 0;
  for(int CYCLE_A = 1; CYCLE_A <= 255; CYCLE_A++)//주기가 50ms일경우 서서히 어두워지고 밝아지는것을 보기 힘들어서 255로 했습니다.
  {
    for(int CYCLE_B = 0; CYCLE_B <= 50; CYCLE_B++)
    {
      digitalWrite(LED, HIGH);
      delayMicroseconds(TIMES);
      digitalWrite(LED, LOW);
      delayMicroseconds(255 - TIMES); 
    }
    TIMES++;
  }
  for(int CYCLE_A = 1; CYCLE_A <= 255; CYCLE_A++)
  {
    for(int CYCLE_B = 0; CYCLE_B <= 50; CYCLE_B++)
     {
      digitalWrite(LED, HIGH);
      delayMicroseconds(TIMES);
      digitalWrite(LED, LOW);
      delayMicroseconds(255 - TIMES);
     }
   TIMES--;
  }
  delay(200);// 딜레이가 없으면 완전히 어두워진 상태를 보기 힘들어서 넣었습니다.
  }
