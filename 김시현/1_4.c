#include<stdio.h>
int main(void) {
	int i, j, n;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 2; j < i; j++) {
			if ((i % j) == 0) break;//������ �������� ���������� �Ҽ����ƴ�
		}
		if (j == i) printf("%4d", i);//����������ϴ� �ݺ����� ������ �ϸ� �Ҽ���� �ǹ̰� i=j����.
	}
	return 0;
}