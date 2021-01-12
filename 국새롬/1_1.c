#include <stdio.h>

int main(void)
{
	float x, y;

	printf("두개의 숫자를 입력하세요: ");
	scanf_s("%f %f", &x, &y);

	printf("%f + %f = %f\n", x, y, x + y);
	printf("%f - %f = %f\n", x, y, x - y);
	printf("%f * %f = %f\n", x, y, x * y);
	printf("%f / %f = %f\n", x, y, x / y);

	return 0;
}