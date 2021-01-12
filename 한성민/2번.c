#include <stdio.h>
int main()
{
	//2
	int grade;
	printf("점수를 입력하세요\n");
	scanf_s("%d", &grade);
	if (grade >= 80 && grade <= 100)
	{

		printf("A등급입니다\n");
	}

	else if (grade >= 60 && grade <= 79)
	{
		printf("B등급입니다\n");
	}
	else if (grade >= 40 && grade <= 59)
	{
		printf("C등급입니다\n");
	}

	else if (grade >= 20 && grade <= 39)
	{
		printf("D등급입니다\n");
	}

	else if (grade >= 0 && grade <= 19)
	{
		printf("E등급입니다\n");
	}
	else
	{
		printf("올바르지 못한 점수입니다\n");
	}
	return 0;
}