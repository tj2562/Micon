#include <stdio.h>

int main() {
	int b=0;
	while (1) {
		int a;
		printf("ÀÔ·Â(0=³¡)");
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