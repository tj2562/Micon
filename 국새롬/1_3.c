#include <stdio.h>
int main(void)
{
	int x;
	int sum = 0;

	while(1)
	{
		printf("정수를 입력하세요: ");
		scanf_s("%d", &x);

		if (x == 0)
			break;
		sum += x;
	}
	printf("입력된 정수의 합은 %d입니다.\n", sum);
	return 0;
}