int LED = 8;
int Button = 2;
int count = 1000;

void setup()
{
 pinMode(LED, OUTPUT);
 pinMode(Button, INPUT_PULLUP);
 digitalWrite(LED,LOW);
}

void loop() 
{
  int sw = digitalRead(Button);
  
  if(sw == LOW)
  {
    count = count -100;
    if(count == 0)
    {
      count = 1000;
    }
  }
  digitalWrite(LED, HIGH);
  delay(count);
  digitalWrite(LED, LOW);
  delay(count);
}
