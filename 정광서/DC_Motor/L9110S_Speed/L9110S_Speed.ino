/* L9110S 모듈 제어 해보기  (방향제어 : 코딩1)*/
int motorA1 =  5; 
int motorA2  = 6; 
int motorB1 =  11; 
int motorB2 =  12; 
int  speed = 255 ;   // speed :  0 ~ 255

void setup ( ) {  
  pinMode( motorA1 , OUTPUT); 
  pinMode( motorA2 , OUTPUT); 
  pinMode( motorB1 , OUTPUT); 
  pinMode( motorB2 , OUTPUT);
}

void loop ( )  {
  // 필요한경우 아래 코드에 따라 모터의 연결을 조정 할 것. 
  // <전진>
  analogWrite( motorA1 , 150); 
  analogWrite( motorA2 , 0); 
  analogWrite( motorB1 , 150); 
  analogWrite( motorB2 , 0);
  delay(2000);
  // 후진
  analogWrite( motorA1 , 0);
  analogWrite( motorA2 , speed);
  analogWrite( motorB1 , 0);
  analogWrite( motorB2 , speed);
  delay(2000); 
  // 좌회전 
  analogWrite( motorA1 , speed);
  analogWrite( motorA2 , 0);
  analogWrite( motorB1 , 0);
  analogWrite( motorB2 , speed);
  delay(2000);
 
  // 우회전 
  analogWrite( motorA1 , 0);
  analogWrite( motorA2 , speed);
  analogWrite( motorB1 , speed);
  analogWrite( motorB2 , 0);
  delay(2000);
  // 정지 
  digitalWrite( motorA1 , 0);
  digitalWrite( motorA2 , 0);
  digitalWrite( motorB1 , 0);
  digitalWrite( motorB2 , 0);
  delay(2000);
}
