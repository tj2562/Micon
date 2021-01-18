#include <stdio.h>
//2번
int main()
{
	double a;
	printf("점수를 입력 : ");
	scanf_s("%lf", &a);

	printf("등급은 ");
	if (a >= 80 && a <= 100) printf("A");
	else if (a >= 60 && a < 80) printf("B");
	else if (a >= 40 && a < 60) printf("C");
	else if (a >= 20 && a < 40) printf("D");
	else if (a >= 40 && a < 20) printf("E");
	else printf("100점 만점이 아니여");

	return 0;
}