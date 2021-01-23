  #define SW 8
  #define RED 5
  #define YEL 6
  #define GRE 7
  
  int sw1=0;
 void setup() {
  // put your setup code here, to run once:
  pinMode(SW,INPUT_PULLUP);
  pinMode(RED,OUTPUT);
  pinMode(YEL,OUTPUT);
  pinMode(GRE,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sw=digitalRead(SW);
  if(sw==LOW){
    if(sw1==0){
      sw1=1;
    }
    else if(sw1==1){
      sw1=2;
    }
    else if(sw1==2){
      sw1=0;
    }
    while(sw==LOW){//루프 돌려줘야 명령이 이중으로 안먹힘
      sw=digitalRead(SW);//버튼에서 손을 땔때 sw=HIGH
      delay(50);//조금의 딜레이가 있어야지 명령이 이중으로 안먹힘
      }
  }
  if(sw1==0){
    digitalWrite(RED,HIGH);
    digitalWrite(YEL,LOW);
    digitalWrite(GRE,LOW);
  }
  else if(sw1==1){
    digitalWrite(RED,LOW);
    digitalWrite(YEL,HIGH);
    digitalWrite(GRE,LOW);
  }
   else if(sw1==2){
    digitalWrite(RED,LOW);
    digitalWrite(YEL,LOW);
    digitalWrite(GRE,HIGH);
  }
  
}
