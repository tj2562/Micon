#include<stdio.h>

int main(void) {
	int number;
	int sum = 0;
	do{
		printf("���ڸ� �Է��Ͻÿ�");
		scanf_s("%d", &number);
		sum += number;
	} while (number != 0);
	printf("���ڵ��� ������ %d�Դϴ�", sum);
	return 0;
}