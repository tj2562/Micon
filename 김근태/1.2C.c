#include <stdio.h>



int main(void)
{
	int a = 0, total = 0;
	while (1)
	{
		printf("������ �Է��Ͻÿ�:");
		scanf_s("%d", &a);
		total += a;

		if (a == 0)
		{
			break;
		}
	}
	printf("�� �� :%d", total);

}