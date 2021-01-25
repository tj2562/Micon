
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //직렬통신 설정
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<=50; i++){
    digitalWrite(12, HIGH);
    delayMicroseconds(i);

    digitalWrite(12,LOW);
    delayMicroseconds(50-i);
  }
  for(int i=50; i>=0; i--){
    digitalWrite(12, HIGH);
    delayMicroseconds(i);

    digitalWrite(12,LOW);
    delayMicroseconds(50-i);
  }
}
