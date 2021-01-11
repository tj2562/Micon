#include <stdio.h>

int main()
{
	int num = 1;
	int total = 0;

	while (num != 0)
	{
		printf("정수를 입력하시오:");
		scanf_s("%d", &num);
		total += num;
	}
	printf("입력된 정수의 총합:%d", total);
	return 0;
}