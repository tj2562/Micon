#include <stdio.h>



int main(void)
{
	int a = 0, total = 0;
	while (1)
	{
		printf("정수를 입력하시오:");
		scanf_s("%d", &a);
		total += a;

		if (a == 0)
		{
			break;
		}
	}
	printf("총 합 :%d", total);

}