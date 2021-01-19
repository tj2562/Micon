int LED1=13;
 
  int b=2;
  
  int gap=500;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
 
  pinMode(b,INPUT_PULLUP); //버튼을 입력 형식으로 받기
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(b)==LOW)
  {
    gap=gap-100;
  }  
  
    digitalWrite(LED1,HIGH);
    delay(gap);
    digitalWrite(LED1,LOW);
    delay(gap);

 

}
