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
		printf("�̸��� �Է��ϼ���: ");
		scanf_s("%s", list[i].name);
		printf("������ �Է��ϼ���: ");
		scanf_s("%lf", &list[i].grade);
		printf("�ּҸ� �Է��ϼ���: ");
		scanf_s("%s", list[i].address);
		printf("\n");
	}
	for (i = 0; i < SIZE; i++)
		printf("�̸�:%s\n ����:%lf\n �ּ�:%s\n", list[i].name, list[i].grade, list[i].address);
	return 0;
}