//버튼 누를때마다 깜빡거리는 주기가 짧아진다
int led=13;
int flashTime=100;
void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(led, OUTPUT); 
}

void loop() {
  int sw=digitalRead(2);
    digitalWrite(led,HIGH);
    delay(flashTime);
    digitalWrite(led,LOW);
    delay(flashTime);
  if(sw==0){
    flashTime=flashTime-10; // flashTime 변수가 0보다 작아지는 경우에 delay함수에 음수값이 들어가서 문제가 발생할수도 있어요. 
                            // 조건문을 더 사용해서 0보다 작은경우는 빼지 않거나, 0으로 만들어주는 코드가 필요
   }
}
