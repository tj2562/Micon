
int green=12;
int yellow=11;
int red=10;


void setup() {
  // put your setup code here, to run once:
pinMode(green, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(red, OUTPUT);
pinMode(7, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
bool button = digitalRead(7);
if(button == true) {
    digitalWrite(green, LOW);
    delay(600);
    digitalWrite(yellow, LOW);
    delay(600);
    digitalWrite(red, LOW);
    delay(600);
    }
        else{   // if와 else는 동일한 수준이므로, 들여쓰기를 맞춰주시면 좋을것 같아요~~
          digitalWrite(green,HIGH);
          delay(600);
          digitalWrite(yellow,HIGH);
          delay(600);
          digitalWrite(red,HIGH);
          delay(600);
          }//good
      
}
