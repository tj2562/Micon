#include <stdio.h>
int main(void)
{
	int x;
	int sum = 0;

	while(1)
	{
		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &x);

		if (x == 0)
			break;
		sum += x;
	}
	printf("�Էµ� ������ ���� %d�Դϴ�.\n", sum);
	return 0;
}