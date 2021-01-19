#include <stdio.h>

int main() {
	int a[3][3] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("a[%d][%d]입력", i + 1, j + 1);
			scanf_s("%d", &(*(a + i))[j]);
		}
	}
	int i, j;
	printf("얻고싶은 행열(i,j)");
	scanf_s("%d,%d", &i, &j);
	printf("%d", (*(a + i-1))[j-1]);
}