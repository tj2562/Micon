#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	printf("chose number:\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("+ :%d\n", a + b);
	printf("- :%d\n", a - b);
	printf("x :%d\n", a * b);
	printf("dive :%d\n", a / b);

}