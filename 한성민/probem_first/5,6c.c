#include<stdio.h>
int main()
{

	//5
	int matrix_1[2];  //1��
	int matrix_2[2];  //2�� 
	int matrix_3[2];  //3��
	int j, Sum_1, Sum_2, Sum_3;
	int* ptr_1, * ptr_2, * ptr_3;
	int row, column;
	ptr_1 = &matrix_1[0];
	ptr_2 = &matrix_2[0];
	ptr_3 = &matrix_3[0];
	Sum_1 = 0;
	Sum_2 = 0;
	Sum_3 = 0;

	printf("3*3����� 1�࿡ �� 3���� ���� �Է��ϼ���\n");
	for (j = 0; j <= 2; j++)
	{
		scanf_s("%d", &ptr_1[j]);
	}


	printf("3*3����� 2�࿡ �� 3���� ���� �Է��ϼ���\n");
	for (j = 0; j <= 2; j++)
	{
		scanf_s("%d", &ptr_2[j]);
	}


	printf("3*3����� 3�࿡ �� 3���� ���� �Է��ϼ���\n");
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
	printf("�� �� = %d", Sum_1 + Sum_2 + Sum_3);

	//6
	printf("ã���� �ϴ� ���� �Է��ϼ���\n");
	scanf_s("%d", &row);

	switch (row)
	{
	case 1:
		printf("ã���� �ϴ� ���� �Է��ϼ���\n");
		scanf_s("%d", &column);
		printf("%d\n", *(ptr_1 + column - 1));
		break;

	case 2:
		printf("ã���� �ϴ� ���� �Է��ϼ���\n");
		scanf_s("%d", &column);
		printf("%d\n", *(ptr_2 + column - 1));
		break;

	case 3:
		printf("ã���� �ϴ� ���� �Է��ϼ���\n");
		scanf_s("%d", &column);
		printf("%d\n", *(ptr_3 + column - 1));
		break;
	}

}