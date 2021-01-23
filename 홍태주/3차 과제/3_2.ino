
int led=9;


void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}


void loop() {
  
  for(int bright=0; bright<=255; bright++){
  analogWrite(led,bright);
  Serial.println(bright);
  delay(5);
  }

  for(int bright=255; bright>=0; bright--){
  analogWrite(led,bright);
  Serial.println(bright);
  delay(5);
  }


}
