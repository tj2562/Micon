#include <stdio.h>
void main() {
	int a, sum = 0;
	while (1) {
		scanf("%d", &a);
		if (a != 0)
			sum += a;
		else if (a == 0)
			break;
	}
	printf("합은 %d 입니다",sum);
}