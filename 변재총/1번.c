#include <stdio.h>

int main(void)
{
	int a, b;
	printf("두수 입력");
	scanf_s("%d,%d", &a, &b);
	printf("%d", a + b);
}