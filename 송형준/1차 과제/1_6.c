#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int mat[3][3];

	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d행 %d열의 값을 입력하시오\n", i + 1, j + 1);
			scanf("%d", &mat[i][j]);
		}

	}
	//6번 문제
	printf("행과 열을 입력하시오\n");
	scanf("%d %d", &i, &j);

	int (*p)[3] = mat;

	printf("%d행 %d열은 %d 입니다.", i, j, p[i-1][j-1]);
	
}
