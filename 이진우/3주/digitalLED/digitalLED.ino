//디지털로 LED 밝아졌다가 어두워지는 것 반복
void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT);
}

void loop() {
  for(int value=50; value>=0;value--){
    digitalWrite(11,HIGH);
    delayMicroseconds(value);
    digitalWrite(11,LOW);
    delayMicroseconds(50-value);
    Serial.println(value);
  }
  for(int value=0; value<=50;value++){
    digitalWrite(11,HIGH);
    delayMicroseconds(value);
    digitalWrite(11,LOW);
    delayMicroseconds(50-value);
    Serial.println(value);
  }
}
