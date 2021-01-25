void setup(){
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  for (int value = 0; value <= 255; value++)
  {
    analogWrite(9, value);
    Serial.println(value);
  }
  for(int value = 255; value >=0; value--)
  {
    analogWrite(9, value);
    Serial.println(value);
  }
}
