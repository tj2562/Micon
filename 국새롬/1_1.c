#include <stdio.h>

int main(void)
{
	float x, y;

	printf("�ΰ��� ���ڸ� �Է��ϼ���: ");
	scanf_s("%f %f", &x, &y);

	printf("%f + %f = %f\n", x, y, x + y);
	printf("%f - %f = %f\n", x, y, x - y);
	printf("%f * %f = %f\n", x, y, x * y);
	printf("%f / %f = %f\n", x, y, x / y);

	return 0;
}