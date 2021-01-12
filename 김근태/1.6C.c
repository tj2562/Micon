#include <stdio.h>

#define size 2
struct student
{
	char name[10];
	int grade;
	char address[10];

};

int main(void)
{
	int i;
	struct student list[size]
		for ( i = 0;i < size;i++)
		{
			pirntf("이름을 입력하시오.");
			scanf_s("%s", list[i].name);
			printf("성적을 입력하시오.");
			scanf_s("%d", &list[i].grade);
			printf("주소를 입력하시오.");
			scanf_s("%s", list[i].address);

		}
	printf("%s%s", list[0].name, list[1].name);
	printf("%d%d", list[0].grade, list[1].grade);
	printf("%s%s", list[0].address, list[1].address);



}