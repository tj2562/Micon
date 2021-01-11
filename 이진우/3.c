#include <stdio.h>

int main(void)
{
	int x=0;
	int add;

	while (1)
	{
		printf("정수를 입력하시오\n");
		scanf("%d", &add);

		x = x + add;

		if (add == 0)
		{
			printf("입력된 숫자의 총합은 %d\n", x);
			break;
		}
	}
	return 0;
}