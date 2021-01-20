//#define pushBtn 2

void setup() {
  Serial.begin(9600); // 직렬통신 설정
 
  //pinMode(pushBtn,INPUT_PULLUP); 위에서 상수로 선언하여 쓰면 가독성 향상!!
  pinMode(2,INPUT_PULLUP); // 2번을 입력으로
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}


void loop() {

  int sw=digitalRead(2);
  if (!sw){
    digitalWrite(13,HIGH);
    delay(600);
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    delay(600);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(600);
    digitalWrite(13,LOW);
    delay(600);
    }

    //good
}
