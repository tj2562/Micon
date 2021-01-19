#include<stdio.h>
int main()
{
	//3
	int Number_3, Sum;
	Sum = 0;
	printf("총 합을 계산하려는 수를 입력하세요");
	scanf_s("%d", &Number_3);
	while (Number_3 != 0)
	{
		Sum = Sum + Number_3;
		printf("총 합을 계산하려는 수를 입력하세요");
		scanf_s("%d", &Number_3);
	}
	printf("총 합은 %d입니다", Sum);
	return 0;
}