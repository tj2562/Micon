int count =1000;
unsigned long privtime=0;
int sw2=0;
int sw3;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int sw = digitalRead(8);//8번핀 확인
  unsigned long nowtime = millis();//시간 함수
  
  if(sw==LOW){//8번핀이 눌리면
       
       count=count-100;
       if(count==0){
       count=1000;//반복시키기 위해 0->1000
       }
       while(sw==LOW){//여기서 루프를 돌려줘야 버튼이 눌려있을때 중복으로 명령이 먹히지 않는다
        sw=digitalRead(8);//버튼에서 손을 때면 sw=HIGH됨
       }
  }
  
 
  if(nowtime - privtime >=count&&sw2==0){//시간차가 count보다 같거나 클때
    privtime=nowtime;
    digitalWrite(5,HIGH);
    sw2=1;//켜졌다 꺼졌다 하기위해 스위치 변수 추가 
  }
  else if(nowtime - privtime >=count&&sw2==1){
    privtime=nowtime;
     digitalWrite(5,LOW);
    sw2=0;
  }
}
