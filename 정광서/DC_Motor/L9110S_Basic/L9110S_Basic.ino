/* L9110S 모듈 제어 해보기  (방향제어 : 코딩1)*/
int motorA1 =  5; 
int motorA2  = 6; 
int motorB1 =  9; 
int motorB2 =  10; 

void setup ( ) {  
  pinMode( motorA1 , OUTPUT); 
  pinMode( motorA2 , OUTPUT); 
  pinMode( motorB1 , OUTPUT); 
  pinMode( motorB2 , OUTPUT);
}

void loop ( )  {
  // 필요한경우 아래 코드에 따라 모터의 연결을 조정해야한다. 
  // <전진>
  digitalWrite( motorA1 , HIGH); 
  digitalWrite( motorA2 , LOW); 
  digitalWrite( motorB1 , HIGH); 
  digitalWrite( motorB2 , LOW);
  delay(2000);

  // <전진>
  digitalWrite( motorA1 , HIGH); 
  digitalWrite( motorA2 , LOW); 
  digitalWrite( motorB1 , HIGH); 
  digitalWrite( motorB2 , LOW);
  delay(2000);

  // <멈춤>
  digitalWrite( motorA1 , LOW); 
  digitalWrite( motorA2 , LOW); 
  digitalWrite( motorB1 , LOW); 
  digitalWrite( motorB2 , LOW);
  delay(2000);

  // <후진>
  digitalWrite( motorA1 , LOW); 
  digitalWrite( motorA2 , HIGH); 
  digitalWrite( motorB1 , LOW); 
  digitalWrite( motorB2 , HIGH);
  delay(2000);

  // <멈춤>
  digitalWrite( motorA1 , LOW); 
  digitalWrite( motorA2 , LOW); 
  digitalWrite( motorB1 , LOW); 
  digitalWrite( motorB2 , LOW);
  delay(2000);
}
