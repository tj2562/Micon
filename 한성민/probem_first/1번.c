#include <stdio.h>
int main()
{
	//1
	int Num1, Num2;
	int PLUS, MINUS, TIMES, DIVIDE;

	printf("���� �ϳ��� �Է��ϼ���\n");
	scanf_s("%d", &Num1);
	printf("�Ǵٸ� ���� �ϳ��� �Է��ϼ���\n");
	scanf_s("%d", &Num2);
	PLUS = Num1 + Num2;
	MINUS = Num1 - Num2;
	TIMES = Num1 * Num2;
	DIVIDE = Num1 / Num2;
	printf("��Ģ������ ����Դϴ�\n");
	printf("���ϱ�=%d\n", PLUS);
	printf("����=%d\n", MINUS);
	printf("���ϱ�=%d\n", TIMES);
	printf("������=%d\n", DIVIDE);
	return 0;
}