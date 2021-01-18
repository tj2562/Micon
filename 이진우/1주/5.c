//행렬 포인터로 입력후 총합 출력하는 프로그램
#include <stdio.h>
#define ROW 3
#define COL 3
void add_matrix(int *prt);

int main(void)
{
	int i,j;
	int data[ROW][COL];
	
	printf("%d*%d의 행렬을 입력하시오:", ROW, COL);
	
	for (i = 0; i < ROW; i++)	//행렬 값을 입력
	{
		for (j = 0; j < COL; j++)
		{
			scanf("%d", &data[i][j]);
		}
	}
	
	add_matrix(data);

	return 0;
}

//행렬의 원소를 합하는 함수
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