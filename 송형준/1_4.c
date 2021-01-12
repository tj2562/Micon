#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void prime_num(int a);

int main()
{
	int a;
	scanf("%d", &a);

	prime_num(a);
}
void prime_num(int a)
{
	int i, j, k;

	for (i = 1; i <= a; i++)
	{
		k = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				k++;
		}
		if (k == 0)
			printf("%d\n", i);
	}
}