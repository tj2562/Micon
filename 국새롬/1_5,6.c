#include <stdio.h>
int make_matrix(int(*p)[3]);
int show_matrix(int(*p)[3]);
int sum_matrix(int(*p)[3]);

int main(void)
{
	int sum_all;
	int x[3][3];
	int *p = &x;
	
	make_matrix(x);
	printf(">>>�Էµ� ���<<<\n");
	show_matrix(x);
	
	sum_matrix(x);
	sum_all = sum_matrix(x);	
	printf(">>>������ ����<<<\n");
	printf("%d", sum_all);

}

int make_matrix(int(*p)[3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d�� %d���� ���� �Է��ϼ���: ", i+1, j+1);
			scanf_s("%d", &p[i][j]);
		}
	}
}

int show_matrix(int(*p)[3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", p[i][j]);
		}printf("\n");
	}
}

int sum_matrix(int(*p)[3])
{
	int i, j;
	int sum = 0;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum += p[i][j];
		}
	}return sum;
}