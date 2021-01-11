#include <stdio.h>

int main(void)
{
	int i, j, num;
	
	printf(">>>정수를 입력받으면 그 정수까지의 소수를 출력하는 프로그램<<<\n");
	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (i == j)
			printf("%4d", i);
	}
	return 0;

}