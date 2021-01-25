int potPin = A0;
int potVal;
int led=9;
int bright;


void setup() {
  Serial.begin(9600);
  while(!Serial);
}

void loop() {
  bright = analogRead(led);
  
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);

  bright = map(potVal, 0, 1023, 0, 255);
  Serial.print(", bright : ");
  Serial.println(bright);

  analogWrite(led,bright);
  delay(15);
}
