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
			printf("%d�� %d���� ���� �Է��Ͻÿ�\n", i + 1, j + 1);
			scanf("%d", &mat[i][j]);
		}

	}
	//6�� ����
	printf("��� ���� �Է��Ͻÿ�\n");
	scanf("%d %d", &i, &j);

	int (*p)[3] = mat;

	printf("%d�� %d���� %d �Դϴ�.", i, j, p[i-1][j-1]);
	
}
