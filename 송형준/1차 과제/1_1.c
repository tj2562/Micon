#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	double a, b;
	scanf("%lf%lf", &a, &b);

	printf("a + b = %.1lf\n", a + b);
	printf("a - b = %.1lf\n", a - b);
	printf("a * b = %.1lf\n", a * b);
	printf("a / b = %.1lf\n", a / b);

}