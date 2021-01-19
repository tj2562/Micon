#include <stdio.h>
#define SIZE 2

struct student {
	char name[20];
	int grade;
	char address[100];
};

main()
{
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("이름을 입력하세요 : ");
		scanf_s("%s", list[i].name, 20);
		printf("성적을 입력하세요 : ");
		scanf_s("%d", &list[i].grade);
		printf("주소를 입력하세요 : ");
		scanf_s("%s", list[i].address, 100);
	}

	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("이름 : %s\n", list[i].name);
		printf("성적 : %d\n", list[i].grade);
		printf("주소 : %s\n", list[i].address);
		printf("\n");
	}
}