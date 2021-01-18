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

   printf("이름을 입력하세요 : ");
   scanf("%s",&report.name);
   printf("성적을 입력하세요 : ");
   scanf("%d",&report.grade);
   printf("주소를 입력하세요 : ");
   scanf("%s",&report.add);
   printf("\n\n");


   printf("이름 : %s\n", report.name);
   printf("성적 : %d\n", report.grade);
   printf("주소 : %s\n", report.add);


   return 0;

}