#include <stdio.h>

struct student {
	char name[20];
	float grade;
	char address[20];
};

int main(void)
{
	struct student s[2];

	for (int i = 0; i < 2; i++)
	{
		printf("�̸��� �Է��ϼ���: ");
		scanf_s("%s", s[i].name, 20);
		printf("����(�Ǽ�)�� �Է��ϼ���: ");
		scanf_s("%f", &s[i].grade);
		printf("�ּҸ� �Է��ϼ���: ");
		scanf_s("%s", s[i].address, 20);
	}

	printf("=========================\n");
	for (int j = 0; j < 2; j++)
	{
		printf("�̸�: %s\n����: %f\n�ּ�: %s\n", s[j].name, s[j].grade, s[j].address);
		printf("=========================\n");
	}
}

