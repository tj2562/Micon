#include <stdio.h>

int main(void)
{
   int grade;
   
   printf("점수를 입력하시오 : ");
   scanf("%d", &grade);

   if(grade<0||grade>100)
      printf("다시 입력하시오\n");
   else if(grade<=19)
      printf("E등급입니다.\n");
   else if(grade<=39)
      printf("D등급입니다.\n");
   else if(grade<=59)
      printf("C등급입니다.\n");
   else if(grade<=79)
      printf("B등급입니다.\n");
   else
      printf("A등급입니다.\n");

   return 0;

}