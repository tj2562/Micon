#include <stdio.h>

int main()
{
	struct student {
		char name[10];
		int grade;
		int address;
	};

	struct student s;

	printf("�̸� : ");
	scanf_s("%s", s.name, 9);

	printf("���� : ");
	scanf_s("%d", &s.grade);

	printf("�ּ� : ");
	scanf_s("%d", &s.address);

	printf("\n ����ǥ \n");
	printf("�̸�:%s\n", s.name);
	printf("����:%d\n", s.grade);
	printf("�ּ�:%d\n", s.address);

}