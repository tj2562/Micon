#include <stdio.h>

int main()
{
	int num = 1;
	int total = 0;

	while (num != 0)
	{
		printf("������ �Է��Ͻÿ�:");
		scanf_s("%d", &num);
		total += num;
	}
	printf("�Էµ� ������ ����:%d", total);
	return 0;
}