// ������ �Է¹����� �� ���������� �Ҽ��� ����ϴ� �Լ�
#include <stdio.h>

int get_prime(int n)
{
	int count = 0;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i%j == 0)
			{
				count = count + 1;
			}
		}
		if (count == 2)
		{
			printf("%d\n", i);
		}
		count = 0;
	}
	
	return 0;
}