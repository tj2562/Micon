//아날로그 제어
int LED=9;
void setup() 
{
 Serial.begin(9600);
 pinMode(LED,OUTPUT);
}

void loop() {
  for(int value =0; value <= 100; value++)
    {
      analogWrite(LED,value);
      Serial.println(value);
      delay(5);
    }
    for(int value =100; value>=0; value-- )
    {
      analogWrite(LED,value);
      Serial.println(value);
      delay(5);
    }
}
