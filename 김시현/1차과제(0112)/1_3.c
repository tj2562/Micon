#include<stdio.h>

int main(void) {
	int number;
	int sum = 0;
	do{
		printf("숫자를 입력하시오");
		scanf_s("%d", &number);
		sum += number;
	} while (number != 0);
	printf("숫자들의 총합은 %d입니다", sum);
	return 0;
}