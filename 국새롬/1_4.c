#include <stdio.h>

int main(void)
{
	int i, j, num;
	
	printf(">>>������ �Է¹����� �� ���������� �Ҽ��� ����ϴ� ���α׷�<<<\n");
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (i == j)
			printf("%4d", i);
	}
	return 0;

}