#include<stdio.h>

int main(void) {
	double x, y;
	printf("두 수를 입력하시오:");
	scanf_s("%lf %lf", &x, &y);
	printf("두수의 뺄셈은 %.2f\n", x - y);
	printf("두수의 덧셈은 %.2f\n", x + y);
	printf("두수의 곱셈은 %.2f\n", x * y);
	printf("두수의 나눗셈은 %.2f\n", x / y);
	return 0;
}
