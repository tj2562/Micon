#include <stdio.h>
struct inf
   {
      char name[30];
      int grade;
      char add[100];
   };

int main(void)
{
   struct inf report;

   printf("�̸��� �Է��ϼ��� : ");
   scanf("%s",&report.name);
   printf("������ �Է��ϼ��� : ");
   scanf("%d",&report.grade);
   printf("�ּҸ� �Է��ϼ��� : ");
   scanf("%s",&report.add);
   printf("\n\n");


   printf("�̸� : %s\n", report.name);
   printf("���� : %d\n", report.grade);
   printf("�ּ� : %s\n", report.add);


   return 0;

}