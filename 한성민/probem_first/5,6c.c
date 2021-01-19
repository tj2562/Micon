#include<stdio.h>
int main()
{

	//5
	int matrix_1[2];  //1행
	int matrix_2[2];  //2행 
	int matrix_3[2];  //3행
	int j, Sum_1, Sum_2, Sum_3;
	int* ptr_1, * ptr_2, * ptr_3;
	int row, column;
	ptr_1 = &matrix_1[0];
	ptr_2 = &matrix_2[0];
	ptr_3 = &matrix_3[0];
	Sum_1 = 0;
	Sum_2 = 0;
	Sum_3 = 0;

	printf("3*3행렬의 1행에 들어갈 3개의 수를 입력하세요\n");
	for (j = 0; j <= 2; j++)
	{
		scanf_s("%d", &ptr_1[j]);
	}


	printf("3*3행렬의 2행에 들어갈 3개의 수를 입력하세요\n");
	for (j = 0; j <= 2; j++)
	{
		scanf_s("%d", &ptr_2[j]);
	}


	printf("3*3행렬의 3행에 들어갈 3개의 수를 입력하세요\n");
	for (j = 0; j <= 2; j++)
	{
		scanf_s("%d", &ptr_3[j]);
	}
	for (j = 0; j <= 2; j++)
	{
		Sum_1 = Sum_1 + *(ptr_1 + j);
		Sum_2 = Sum_2 + *(ptr_2 + j);
		Sum_3 = Sum_3 + *(ptr_3 + j);
	}
	printf("총 합 = %d", Sum_1 + Sum_2 + Sum_3);

	//6
	printf("찾고자 하는 행을 입력하세요\n");
	scanf_s("%d", &row);

	switch (row)
	{
	case 1:
		printf("찾고자 하는 열을 입력하세요\n");
		scanf_s("%d", &column);
		printf("%d\n", *(ptr_1 + column - 1));
		break;

	case 2:
		printf("찾고자 하는 열을 입력하세요\n");
		scanf_s("%d", &column);
		printf("%d\n", *(ptr_2 + column - 1));
		break;

	case 3:
		printf("찾고자 하는 열을 입력하세요\n");
		scanf_s("%d", &column);
		printf("%d\n", *(ptr_3 + column - 1));
		break;
	}

}