#include <stdio.h>

int main(void)
{
   int num1, num2;

   printf("�ΰ��� ���ڸ� �Է��Ͻÿ� : ");
   scanf("%d %d", &num1, &num2);

   printf("�� ������ �� : %d\n",num1+num2);
   printf("�� ������ �� : %d\n",num1-num2);
   printf("�� ������ �� : %d\n",num1*num2);
   printf("ù��° ���ڸ� �ι�° ���ڷ� ���� �� : %d\n",num1/num2);

   return 0;
}