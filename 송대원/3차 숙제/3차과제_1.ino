void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for(int i = 0; i <= 500; i++)
  {
    digitalWrite(9, HIGH);
    delayMicroseconds(i);

    digitalWrite(9, LOW);
    delayMicroseconds(500-i);
  }

  for(int i = 500; i >= 0; i--)
  {
    digitalWrite(9, HIGH);
    delayMicroseconds(i);

    digitalWrite(9, LOW);
    delayMicroseconds(500-i);
  }
}
