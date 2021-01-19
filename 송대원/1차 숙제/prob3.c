#include <stdio.h>
main()
{
	int i;
	int sum = 0;

	while (1)
	{
		scanf_s("%d", &i);
		if (i == 0) break;
		sum += i;
	}

	printf("%d\n", sum);
	return 0;
}