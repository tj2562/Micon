int Write1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potval= analogRead(A0);
  Serial.print("pin : ");
  Serial.print(potval);
  Serial.print("LED : ");
  Serial.println(Write1);
  Write1=map(potval,0,1023,0,255);
  analogWrite(5,Write1);
}
