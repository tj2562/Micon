int LED_1 = 9;
int LED_2 =10;
int LED_3 =11;
int count;
void setup(){
  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  digitalWrite(LED_1,LOW);
  digitalWrite(LED_2,LOW);
  digitalWrite(LED_3,LOW);


}

void loop() {
  int sw = digitalRead(2);
  
if (sw == LOW) //스위치 눌릴때
{
 
      digitalWrite(LED_1 ,HIGH);
      digitalWrite(LED_2,LOW);
      digitalWrite(LED_3,LOW);
      delay(600);
   
    
      digitalWrite(LED_1,LOW);
      digitalWrite(LED_2,HIGH);
      digitalWrite(LED_3,LOW);
      delay(600);
        
     
    
      digitalWrite(LED_1,LOW);
      digitalWrite(LED_2,LOW);
      digitalWrite(LED_3,HIGH);
    delay(600);
  
 }
}
