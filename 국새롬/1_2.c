#include <stdio.h>

int main(void)
{
	int x;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &x);

	if (x >= 80)
		printf("A��� �Դϴ�.\n");
	else if (x >= 60)
		printf("B��� �Դϴ�.\n");
	else if (x >= 40)
		printf("C��� �Դϴ�.\n");
	else if (x >= 20)
		printf("D��� �Դϴ�.\n");
	else
		printf("E��� �Դϴ�.\n");

	return 0;
}