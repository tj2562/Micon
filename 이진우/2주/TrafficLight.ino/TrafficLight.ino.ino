//평상시 초록불이었다가 누르면 신호가 바뀐다
int green=13;
int yellow=12;
int red=11;

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  digitalWrite(green,HIGH); //평상시
  
  int sw = digitalRead(2);
  if(sw==0){
    digitalWrite(green,LOW); 
    digitalWrite(yellow,HIGH); //yellow
    delay(600);
    digitalWrite(yellow,LOW);
    digitalWrite(red,HIGH); //red
    delay(600);
  }
  digitalWrite(red,LOW);
}
