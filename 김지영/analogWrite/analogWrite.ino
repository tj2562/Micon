void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //직렬통신 설정
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int value=0; value<=255; value++){
    analogWrite(11, value);
    Serial.println(value);
    delay(50);
  }
  for(int value=255; value>=0; value--){
    analogWrite(11,value);
    Serial.println(value);
    delay(50);
  }
   
}
