#include <stdio.h>

int main(void)
{
   
   int num=0;
   int result=0;


   do
   {
      printf("������ �Է��Ͻÿ� : ");
      scanf("%d", &num);
      result+=num;
   }while(num!=0);

   printf("�Է��� �������� �� : %d\n", result);

   return 0;

}