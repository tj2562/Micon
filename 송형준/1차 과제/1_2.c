#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int score;
	scanf("%d", &score);

	if (score <= 100 && score >= 80)
		printf("�̹� �������� A�Դϴ�.");
	else if (score <= 79 && score >= 60)
		printf("�̹� �������� B�Դϴ�");
	else if (score <= 59 && score >= 40)
		printf("�̹� �������� C�Դϴ�");
	else if (score <= 39 && score >= 20)
		printf("�̹� �������� D�Դϴ�");
	else if (score <= 19 && score >= 0)
		printf("�̹� �������� E�Դϴ�");
	else
		printf("�ٽ� �Է����ּ���");
}