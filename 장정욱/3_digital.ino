//3차과제 digitalWrite()
int LED = 9;
int cycle_time = 50;
  
void setup() 
{
 Serial.begin(9600);
 pinMode(LED,OUTPUT);
}

void loop() {

  
 for(int time=0; time<=cycle_time; time++)
  {
    digitalWrite(LED,HIGH);
    delayMicroseconds(time);
    digitalWrite(LED,LOW);
    delayMicroseconds(cycle_time-time);
    delay(5);
  }

 for(int time=cycle_time; time>=0; time--)
  {
    digitalWrite(LED,HIGH);
    delayMicroseconds(time);
    digitalWrite(LED,LOW);
    delayMicroseconds(cycle_time-time);
    delay(5);
  }
}
