
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //직렬통신 설정
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
    digitalWrite(12, HIGH);
    delayMicroseconds(25);

    digitalWrite(12,LOW);
    delayMicroseconds(25);
   
}
