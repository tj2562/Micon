#include <stdio.h>

int  Showtotal(int arr[][3], int column)
{
	int i, j, sum = 0;
	for (i = 0;i < column;i++)
	{
		for (j = 0;j < 3;j++)
			sum += arr[i][j];
	}

	
	return sum;
}

int main(void)
{
	int arr[3][3] = { 0 };
	int i, j;

	printf("3x3행렬을 입력하시오:\n");
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	printf("%d", Showtotal(arr, sizeof(arr) / sizeof(arr[0])));

}