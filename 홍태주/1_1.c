#include <stdio.h>

int main(void)
{
   int num1, num2;

   printf("두개의 숫자를 입력하시오 : ");
   scanf("%d %d", &num1, &num2);

   printf("두 숫자의 합 : %d\n",num1+num2);
   printf("두 숫자의 차 : %d\n",num1-num2);
   printf("두 숫자의 곱 : %d\n",num1*num2);
   printf("첫번째 숫자를 두번째 숫자로 나눈 몫 : %d\n",num1/num2);

   return 0;
}