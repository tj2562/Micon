#include <stdio.h>
//1��
int main()
{
	double a, b;
	scanf_s("%lf %lf", &a, &b);

	printf("%.3f + %.3f = %.3f", a, b, a + b);
	printf("\n%.3f - %.3f = %.3f", a, b, a - b);
	printf("\n%.3f * %.3f = %.3f", a, b, a * b);
	printf("\n%.3f / %.3f = %.3f", a, b, a / b);

	return 0;
}