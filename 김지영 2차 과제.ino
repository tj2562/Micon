int green=12;
int yellow=11;
int red=10;

void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(7, INPUT_PULLUP);
 
}

void loop() {
  bool button=digitalRead(7);
  if(button==true)
  {
    digitalWrite(green,LOW);
    delay(600);
    digitalWrite(yellow,LOW);
    delay(600);
    digitalWrite(red,LOW);
    delay(600);
   
    }
    else
    {
      digitalWrite(green,HIGH);
      delay(600);
      digitalWrite(yellow,HIGH);
      delay(600);
      digitalWrite(red,HIGH);
      delay(600);
      }
   
}
