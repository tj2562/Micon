#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int add(int(*p)[3]);

int main()
{
	int mat[3][3], sum;

	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d�� %d���� ���� �Է��Ͻÿ�\n", i + 1, j + 1);
			scanf("%d", &mat[i][j]);
		}
			
	}

	sum = add(mat);
	printf("���� %d �Դϴ�.", sum);
}
int add(int (*p)[3])
{
	int i, j, sum = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum += (*p)[j];
		}
		p++;
	}
	return sum;
}