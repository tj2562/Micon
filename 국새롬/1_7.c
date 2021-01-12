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
		printf("이름을 입력하세요: ");
		scanf_s("%s", s[i].name, 20);
		printf("성적(실수)을 입력하세요: ");
		scanf_s("%f", &s[i].grade);
		printf("주소를 입력하세요: ");
		scanf_s("%s", s[i].address, 20);
	}

	printf("=========================\n");
	for (int j = 0; j < 2; j++)
	{
		printf("이름: %s\n성적: %f\n주소: %s\n", s[j].name, s[j].grade, s[j].address);
		printf("=========================\n");
	}
}

