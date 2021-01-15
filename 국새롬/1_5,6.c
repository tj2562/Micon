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
	printf(">>>입력된 행렬<<<\n");
	show_matrix(x);
	
	sum_matrix(x);
	sum_all = sum_matrix(x);	
	printf(">>>원소의 총합<<<\n");
	printf("%d", sum_all);

}

int make_matrix(int(*p)[3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d행 %d열의 값을 입력하세요: ", i+1, j+1);
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