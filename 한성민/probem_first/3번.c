#include<stdio.h>
int main()
{
	//3
	int Number_3, Sum;
	Sum = 0;
	printf("�� ���� ����Ϸ��� ���� �Է��ϼ���");
	scanf_s("%d", &Number_3);
	while (Number_3 != 0)
	{
		Sum = Sum + Number_3;
		printf("�� ���� ����Ϸ��� ���� �Է��ϼ���");
		scanf_s("%d", &Number_3);
	}
	printf("�� ���� %d�Դϴ�", Sum);
	return 0;
}