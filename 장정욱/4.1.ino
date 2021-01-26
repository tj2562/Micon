//4차 1번

int LED=9; //9번핀 => LED
//A0핀 => 가변저항

void setup() {
  Serial.begin(9600);
  while(!Serial);
}

void loop() {
  int bright = analogRead(LED);
  int Resist_value = analogRead(A0);
  
  Serial.print("Resister_value: ");
  Serial.print(Resist_value);

  bright = map(Resist_value, 0, 1023, 0, 255);
  Serial.print(", bright : ");
  Serial.println(bright);

  analogWrite(LED,bright);
  delay(15);
}
