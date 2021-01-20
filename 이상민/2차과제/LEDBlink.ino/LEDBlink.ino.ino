int Red=13;
int LEDBlink=1000; //낙타식 변수명 설정 good

void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT); 
  //int LEDBlink=1000; // 위에서 이미 전역변수로 선언이됨. 여기서 LEDBlink는 setup 함수에서만 생존하는 지역 변수
}
void loop()
{
  int sw=digitalRead(2);
  if(!sw)
  {
    digitalWrite(13,HIGH);
    delay(LEDBlink); //
    digitalWrite(13,LOW);
    delay(LEDBlink);

    LEDBlink==LEDBlink-200;
   }
}
