int LED = 9;
int ctrPin = A0;
int ctrVal; //0~1023
int bright; //0~255

void setup() 
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  ctrVal = analogRead(ctrPin);
  Serial.print("ctrVal: ");
  Serial.print(ctrVal);

  bright = map(ctrVal, 0, 1023, 0, 255);
  Serial.print(", bright: ");
  Serial.println(bright);

  analogWrite(LED, bright);
  delay(15);
}
