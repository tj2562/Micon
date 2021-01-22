
int led=9;
int cycle=500;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}


void loop() {
  
  for(int bright=0; bright<=cycle; bright++){
  digitalWrite(led,HIGH);
  delayMicroseconds(bright);
  
  digitalWrite(led,LOW);
  delayMicroseconds(cycle-bright);
  
  }

  for(int bright=cycle; bright>=0; bright--){
  digitalWrite(led,HIGH);
  delayMicroseconds(bright);
  
  digitalWrite(led,LOW);
  delayMicroseconds(cycle-bright);
  
  }


}
