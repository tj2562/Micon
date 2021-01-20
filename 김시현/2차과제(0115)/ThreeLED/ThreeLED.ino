int green=13;
int yellow=12;
int red=11;
int push=2;
// 의미있는 변수명 good
void setup() {
  pinMode(push, INPUT_PULLUP);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  
  int sw = digitalRead(push);
  
  if(sw==LOW){
    digitalWrite(green,HIGH);
    delay(600);
    digitalWrite(green,LOW); 
    digitalWrite(yellow,HIGH); //yellow
    delay(600);
    digitalWrite(yellow,LOW);
    digitalWrite(red,HIGH); //red
    delay(600);
    digitalWrite(red,LOW);
  }
  }
