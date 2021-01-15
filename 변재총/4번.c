#include <stdio.h>
int main() {
	printf("ют╥б");
	int a;
	scanf_s("%d", &a);
	for (int b = 2; b <=a; b++) {
		for (int c = 2; c <= b; c++) {
				if (b == 2) {
					printf("%d\n",b);
					break;
				}
				else if (b % c == 0) {
					break;
				}
				else if (c == b - 1) {
					printf("%d\n", b);
					break;
				}
			}
		}
	}
