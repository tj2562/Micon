#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int plus(int(*arr)[3]);
void result(int(*arr)[3], int row, int column);
int main() {
	int num[3][3];
	int i, j;
	int sum;
	int r, c;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d�� %d��: ", i + 1, j + 1);
			scanf_s("%d", &num[i][j]);
		}
		printf("\n");
	}
	sum = plus(num);
	printf("������ %d\n", sum);
	printf("����ϰ� ���� ������ ��� ���� �Է�: ");
	scanf_s("%d %d", &r, &c);
	result(num, r, c);
}

int plus(int(*arr)[3]) {
	int sum1 = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum1 += arr[i][j];
		}
	}
	return sum1;
}

void result(int(*arr)[3], int row, int column) {
	printf("%d", arr[row - 1][column - 1]);
}

int plus(int(*arr)[3]) {
	int sum1 = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum1 += arr[i][j];
		}
	}
	return sum1;
}
