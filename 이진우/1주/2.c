// ������ �Է¹����� ����� ����ϴ� ���α׷�
#include <stdio.h>

int main(void)
{
	int score;

	printf("������ �Է�������:");
	scanf("%d", &score);

	
	if (score >= 80 && score <= 100)
		printf("������ A\n");

	else if (score >= 60 && score < 80)
		printf("������ B\n");

	else if (score >= 40 && score < 60)
		printf("������ C\n");

	else if (score >= 20 && score < 40)
		printf("������ D\n");

	else if (score >= 0 && score < 20)
		printf("������ E\n");

	else 
		printf("������ �߸� �Է��ϼ̽��ϴ�.\n");

	
	return 0;
}