#include<stdio.h>

int main(void) {

	int score;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &score);
	if (score >= 80 && score <= 100) printf("A����Դϴ�.");
	else if (score >= 60 && score <= 79) printf("B����Դϴ�.");
	else if (score >= 40 && score <= 59) printf("C����Դϴ�.");
	else if (score >= 20 && score <= 39) printf("D����Դϴ�.");
	else if (score >= 0 && score <= 19) printf("E����Դϴ�.");
	return 0;
}