#include <stdio.h>

int main(void)
{
	int x=0;
	int add;

	while (1)
	{
		printf("������ �Է��Ͻÿ�\n");
		scanf("%d", &add);

		x = x + add;

		if (add == 0)
		{
			printf("�Էµ� ������ ������ %d\n", x);
			break;
		}
	}
	return 0;
}