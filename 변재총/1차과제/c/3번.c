#include <stdio.h>

int main() {
	int b=0;
	while (1) {
		int a;
		printf("�Է�(0=��)");
		scanf_s("%d", &a);
		if (a == 0) {
			break;
		}
		else{
			b = b + a;
		}
	}
	printf("%d", b);
}