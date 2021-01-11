#include <stdio.h>

int main()
{
	int a;

	printf("점수를 입력하세요:");
	scanf_s("%d", &a);

	if (a >= 80)
		printf("A");
	else
	if (a >= 60)
		printf("B");
	else
	if (a >= 40)
		printf("C");
	else 
	if (a >= 20)
		printf("D");
	else
	if (a >= 0)
		printf("E");

	printf(" 등급입니다");
}