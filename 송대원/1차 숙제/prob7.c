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
		printf("�̸��� �Է��ϼ��� : ");
		scanf_s("%s", list[i].name, 20);
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &list[i].grade);
		printf("�ּҸ� �Է��ϼ��� : ");
		scanf_s("%s", list[i].address, 100);
	}

	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("�̸� : %s\n", list[i].name);
		printf("���� : %d\n", list[i].grade);
		printf("�ּ� : %s\n", list[i].address);
		printf("\n");
	}
}