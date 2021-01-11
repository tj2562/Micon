#include <stdio.h>

int main() {
	float x;
	float y;

	printf("두개의 값 입력");
	scanf_s("%f %f", &x, &y);

	printf("%f\n", x + y);
	printf("%f\n", x - y);
	printf("%f\n", x * y);
	printf("%f\n", x / y);

}