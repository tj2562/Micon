#include <stdio.h>

int main(void)
{
	int i, n;
	int k = 0;
	char ch[64];

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 2; i >= j; j++) {
			if (i != j && i % j == 0) {
				break;
			}
			else if (i == j && i % j == 0) {
				ch[k] = i;
				printf("%d\n", i);
			    
				k++;
			}
		}
	}
	return 0;
}