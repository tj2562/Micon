int LED = 9;
int SWITCH = 3;

void setup() 
{
  Serial.begin(9600);
  pinMode(SWITCH, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() 
{
  for( int Light = 0; Light <= 255; Light++)
  {
    analogWrite(LED,Light);
    Serial.println(Light);
    delay(50);
  }
  
  for( int Light = 255; Light >= 0; Light--)
  {
    analogWrite(LED,Light);
    Serial.println(Light);
    delay(50);
  }
}
