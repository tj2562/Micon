int i;
void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(8,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<255;i++){
    analogWrite(5,i);
    Serial.println(i);
    delay(10);
  }
  for(i=0;i<255;i++){
    analogWrite(5,255-i);
    Serial.println(255-i);
    delay(10);
    
  }
  
}
