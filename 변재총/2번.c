#include <stdio.h>

int main() {
	printf("점수 입력");
	int a;
	scanf_s("%d", &a);
	if (a <= 100 && a >= 80) {
		printf("A");
	}
	else if (a <= 79 && a >= 60) {
		printf("B");
	}
	else if (a <= 59 && a >= 40) {
		printf("C");
	}
	else if (a <= 39 && a >= 20) {
		printf("D");
	}
	else if (a <= 19 && a >= 0) {
		printf("E");
	}
}