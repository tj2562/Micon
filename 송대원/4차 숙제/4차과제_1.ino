int porPin = A0;
int potVal;
int light;

void setup(){
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop(){
  potVal = analogRead(porPin);
  
  Serial.print("potVal: ");
  Serial.print(potVal);
  
  light = map(potVal, 0, 1023, 0, 255);
  analogWrite(9, light);
  
  Serial.print(", light: ");
  Serial.println(light);

  delay(15);
}
