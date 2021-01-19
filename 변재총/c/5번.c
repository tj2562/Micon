#include <stdio.h>

int main() {
	int a[3][3] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("a[%d][%d]ют╥б", i + 1, j + 1);
			scanf_s("%d", &(*(a + i))[j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", (*(a + i))[j]);
		}
		printf("\n");
	}
}