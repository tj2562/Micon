#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a = 1;
	int sum = 0;

	printf("������ �Է����ּ���\n");

	while (a != 0)
	{
		scanf("%d", &a);
		sum += a;
	}
	printf("������ %d �Դϴ�.", sum);
}