#include <stdio.h>



int main(void)
{
	int a = 0; int i, j;
	printf("i want sosoo:");
	scanf_s("%d", &a);

	for ( i = 2;i <= a;i++)
	{
		for ( j = 2;j <= i; j++)
		{
			if (i % j == 0)
				break;
			else
			{
				printf("%d\n", i);
				break;
			}
		}
		if (i == j)
		{
			printf("%d\n", i);
		}
	}
}