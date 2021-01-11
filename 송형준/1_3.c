#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a = 1;
	int sum = 0;

	printf("정수를 입력해주세요\n");

	while (a != 0)
	{
		scanf("%d", &a);
		sum += a;
	}
	printf("총합은 %d 입니다.", sum);
}