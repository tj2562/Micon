#include <stdio.h>

int main() {
	int i, j;
	int n;

	printf("값을 입력");
	scanf_s("%d", &n);

	printf("1 ");
	for (i = 2; i <= n; i++) {
		for (j = 2; j <= i; j++) {
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d ", i);
	}
}