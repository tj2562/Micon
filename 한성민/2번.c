#include <stdio.h>
int main()
{
	//2
	int grade;
	printf("������ �Է��ϼ���\n");
	scanf_s("%d", &grade);
	if (grade >= 80 && grade <= 100)
	{

		printf("A����Դϴ�\n");
	}

	else if (grade >= 60 && grade <= 79)
	{
		printf("B����Դϴ�\n");
	}
	else if (grade >= 40 && grade <= 59)
	{
		printf("C����Դϴ�\n");
	}

	else if (grade >= 20 && grade <= 39)
	{
		printf("D����Դϴ�\n");
	}

	else if (grade >= 0 && grade <= 19)
	{
		printf("E����Դϴ�\n");
	}
	else
	{
		printf("�ùٸ��� ���� �����Դϴ�\n");
	}
	return 0;
}