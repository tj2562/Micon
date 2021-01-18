int ledG=13;
int ledY=12;
int ledR=11;


void setup() {
pinMode(ledG,OUTPUT);
pinMode(ledY,OUTPUT);
pinMode(ledR,OUTPUT);
pinMode(10,INPUT_PULLUP);
}
void loop() {
  int sw=digitalRead(10);
  if(!sw){

  digitalWrite(ledG,HIGH);
  digitalWrite(ledY,LOW);
  digitalWrite(ledR,LOW);
  delay(600);
  
  digitalWrite(ledG,LOW);
  digitalWrite(ledY,HIGH);
  digitalWrite(ledR,LOW);
  delay(600);
  
  digitalWrite(ledG,LOW);
  digitalWrite(ledY,LOW);
  digitalWrite(ledR,HIGH);
  delay(600);
  
  digitalWrite(ledG,LOW);
  digitalWrite(ledY,LOW);
  digitalWrite(ledR,LOW);
  
 }

}
