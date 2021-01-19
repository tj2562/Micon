int Red=13;
int LEDBlink=1000;

void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT); 
  int LEDBlink=1000;
}

void loop()
{
  int sw=digitalRead(2);
  if(!sw)
  {
    digitalWrite(13,HIGH);
    delay(LEDBlink);
    digitalWrite(13,LOW);
    delay(LEDBlink);

    LEDBlink==LEDBlink-200;
   }
}
