#include <stdio.h>
#define SIZE 3

struct student {
	char name[20];
	double grade;
	char address;

};

int main(void)
{
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("이름을 입력하세요: ");
		scanf_s("%s", list[i].name);
		printf("성적을 입력하세요: ");
		scanf_s("%lf", &list[i].grade);
		printf("주소를 입력하세요: ");
		scanf_s("%s", list[i].address);
		printf("\n");
	}
	for (i = 0; i < SIZE; i++)
		printf("이름:%s\n 성적:%lf\n 주소:%s\n", list[i].name, list[i].grade, list[i].address);
	return 0;
}