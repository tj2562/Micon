#include <stdio.h>

int main(void)
{
	int x;

	printf("점수를 입력하세요: ");
	scanf_s("%d", &x);

	if (x >= 80)
		printf("A등급 입니다.\n");
	else if (x >= 60)
		printf("B등급 입니다.\n");
	else if (x >= 40)
		printf("C등급 입니다.\n");
	else if (x >= 20)
		printf("D등급 입니다.\n");
	else
		printf("E등급 입니다.\n");

	return 0;
}