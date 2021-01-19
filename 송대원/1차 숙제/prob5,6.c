#include <stdio.h>
void add(int* p);

main()
{
	int a[3][3];
	int i, j;
	int(*p)[3][3] = a;
	int r, c;

	printf("원소를 입력하시오\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	printf("행과 열을 입력하시오\n");
	scanf_s("%d %d", &c, &r);

	add(p);

	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			printf("%d ", (*p)[i][j]);
		}
		printf("\n");
	}
}

void add(int* p)
{
	int i;
	int sum = 0;

	for (i = 0; i < 9; i++)
	{
		sum = sum + p[i];
	}

	printf("원소의 총합: %d\n", sum);
}