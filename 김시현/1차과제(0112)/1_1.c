#include<stdio.h>

int main(void) {
	double x, y;
	printf("�� ���� �Է��Ͻÿ�:");
	scanf_s("%lf %lf", &x, &y);
	printf("�μ��� ������ %.2f\n", x - y);
	printf("�μ��� ������ %.2f\n", x + y);
	printf("�μ��� ������ %.2f\n", x * y);
	printf("�μ��� �������� %.2f\n", x / y);
	return 0;
}
