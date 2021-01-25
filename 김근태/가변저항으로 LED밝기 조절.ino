int LED=5;
int potVal;
int potPin=A0;
int bright;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  
  Serial.println("IM REDY");

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  Serial.print("potVal:");
  Serial.print(potVal);
  bright=map(potVal,0,1023,0,255);
  Serial.print(", bright:");
  Serial.println(bright);

  analogWrite(LED,bright);
  
}
