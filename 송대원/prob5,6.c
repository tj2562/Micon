#include <stdio.h>
void add(int* p);

main()
{
	int a[3][3];
	int i, j;
	int(*p)[3][3] = a;
	int r, c;

	printf("���Ҹ� �Է��Ͻÿ�\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	printf("��� ���� �Է��Ͻÿ�\n");
	scanf_s("%d %d", &c, &r);

	add(p);

	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			printf("%d ", (*p)[i][j]);
		}
		printf("\n");
	}
}

void add(int* p)
{
	int i;
	int sum = 0;

	for (i = 0; i < 9; i++)
	{
		sum = sum + p[i];
	}

	printf("������ ����: %d\n", sum);
}