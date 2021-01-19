int SW=2;
int Red=11,Yellow=10,Green=9;

void setup()
{
  pinMode(Red,OUTPUT);
  pinMode(Yellow,OUTPUT);
  pinMode(Green,OUTPUT);
  pinMode(SW,INPUT_PULLUP);

}

void loop()
{
  digitalWrite(Red,HIGH);
  if(digitalRead(SW)==HIGH)
  {
    digitalWrite(Red,LOW);
    digitalWrite(Yellow,HIGH);
    delay(600);
    digitalWrite(Yellow,LOW);
    digitalWrite(Green,HIGH);
    delay(600);
    digitalWrite(Green,LOW);
    delay(600);
  }
}
