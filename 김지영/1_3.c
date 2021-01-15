#include <stdio.h>

int main(void)
{
	int i, sum;

	scanf_s("%d", &i);

	sum = i;
	
	while (i != 0)
	{
		scanf_s("%d", &i);
		sum += i;
	}

	printf("%d", sum);
	return 0;

}