int YELLOW_Pin = 8;
int WHITE_Pin = 9;

void setup() 
{
  pinMode(2, INPUT_PULLUP);
  pinMode(YELLOW_Pin, OUTPUT);
  pinMode(BLUE_Pin, OUTPUT);
}
void loop() {
  int sw = digitalRead(2);
  if(!sw)
  {
    digitalWrite(YELLOW_Pin,HIGH);
    digitalWrite(BLUE_Pin, LOW);
  }
  else
  {
    digitalWrite(YELLOW_Pin,LOW);
    digitalWrite(BLUE_Pin, HIGH);
  }
}
