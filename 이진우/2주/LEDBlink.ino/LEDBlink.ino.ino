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
    flashTime=flashTime-10;
   }
}
