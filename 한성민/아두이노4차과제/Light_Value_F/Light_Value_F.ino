int Register = A0;
int LED = 3;
int LED_VALUE = 0;
void setup() {
 Serial.begin(9600);
 pinMode(Register,INPUT);
 PinMode(LED,OUTPUT);

}

void loop() {
int value = analogRead(Register);
LED_VALUE = map(value,0,1023,0,255);
analogWrite(LED,LED_VALUE);
delay(100);

}
