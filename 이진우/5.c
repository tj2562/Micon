//��� �����ͷ� �Է��� ���� ����ϴ� ���α׷�
#include <stdio.h>
#define ROW 3
#define COL 3
void add_matrix(int *prt);

int main(void)
{
	int i,j;
	int data[ROW][COL];
	
	printf("%d*%d�� ����� �Է��Ͻÿ�:", ROW, COL);
	
	for (i = 0; i < ROW; i++)	//��� ���� �Է�
	{
		for (j = 0; j < COL; j++)
		{
			scanf("%d", &data[i][j]);
		}
	}
	
	add_matrix(data);

	return 0;
}

//����� ���Ҹ� ���ϴ� �Լ�
int add_matrix(int data[][])
{
	int r, c, sum;

	for (r = 0; r < ROW; r++);
	{
		for (c = 0; c < COL; c++);
			{
			sum += data[r][c];
			}
	}
	printf("%d", sum);
}