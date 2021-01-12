#include <stdio.h>
void main() {
	int a,prime=0;
	scanf("%d", &a);
	for (int e = 1; e < a; e++) {
		for (int i = 1; i <= e; i++) {
			if (e%i == 0) {
				prime++;
			}
		}
		if (prime == 2) printf(" %d ", e);
		prime = 0;
	}
}