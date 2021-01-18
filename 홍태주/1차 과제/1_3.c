#include <stdio.h>

int main(void)
{
   
   int num=0;
   int result=0;


   do
   {
      printf("정수를 입력하시오 : ");
      scanf("%d", &num);
      result+=num;
   }while(num!=0);

   printf("입력한 정수들의 합 : %d\n", result);

   return 0;

}