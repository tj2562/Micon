#include <stdio.h>

int main(void)
{
   int grade;
   
   printf("������ �Է��Ͻÿ� : ");
   scanf("%d", &grade);

   if(grade<0||grade>100)
      printf("�ٽ� �Է��Ͻÿ�\n");
   else if(grade<=19)
      printf("E����Դϴ�.\n");
   else if(grade<=39)
      printf("D����Դϴ�.\n");
   else if(grade<=59)
      printf("C����Դϴ�.\n");
   else if(grade<=79)
      printf("B����Դϴ�.\n");
   else
      printf("A����Դϴ�.\n");

   return 0;

}