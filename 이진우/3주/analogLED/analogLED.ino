////아나로그로 LED 밝아졌다가 어두워지는 것 반복
void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT);
}

void loop() {
  for(int value=0;value<=50;value++){
    analogWrite(11,value);
    Serial.println(value);
  }
  for(int value=50;value>=0;value--){
    analogWrite(11,value);
    Serial.println(value);
  }
}
