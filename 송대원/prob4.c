#include <stdio.h>
main()
{
	int x;
	int i, j;
	int k = 0;

	printf("Input x\n");
	scanf_s("%d", &x);

	printf("\nPrime is\n");
	for (i = 2; i <= x; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0) k = 1;
		}

		if (k == 0) printf("%d\n", i);
		k = 0;
	}

}