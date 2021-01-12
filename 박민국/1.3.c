include <stdio.h>

int main() {
	int x;
	int sum = 0;

	while (1) {
		printf("값을 입력하시오");
		scanf_s("%d", &x);

		sum += x;

		if (x == 0)
			break;
	}
	printf("%d", sum);
}