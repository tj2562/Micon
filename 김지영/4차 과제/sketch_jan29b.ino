int led = 11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int a = analogRead(A1);
analogWrite(led, a/4);
Serial.println(a);
}
