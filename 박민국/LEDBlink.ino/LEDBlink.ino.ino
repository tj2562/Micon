int yellow = 11;
int sw =2;
int time = 5000;
int result;
void setup() {
  pinMode(sw, INPUT_PULLUP);
  pinMode(yellow, OUTPUT);
}

void loop() {
   int button = digitalRead(sw);

   if(button==0)
   result=1;  //조건문 내부는 들여쓰기 ~~
   
   if(result==1){
   digitalWrite(yellow,HIGH);
   delay(time);
   digitalWrite(yellow,LOW);
   delay(time);
   time-=1000;
   result=0;
   }
   //good

   if(time==0)
   time=5000;
}

  
