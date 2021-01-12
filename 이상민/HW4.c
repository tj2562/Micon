#include <stdio.h>

int main()
{
	printf("정수를 입력하세요:");
	int num = 0;
	scanf_s("%d", &num);

	for (int i = 2; i < num; i++)
	{
		int cnt = 0;
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				cnt++;
				if (cnt == 2)
				{
					break;
				}
			}
		}
		if (cnt == 1)
		{
			printf("\t%d", i);
		}
	}

	return 0;
}