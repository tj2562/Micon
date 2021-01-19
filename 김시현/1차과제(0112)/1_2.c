#include<stdio.h>

int main(void) {

	int score;
	printf("점수를 입력하시오:");
	scanf_s("%d", &score);
	if (score >= 80 && score <= 100) printf("A등급입니다.");
	else if (score >= 60 && score <= 79) printf("B등급입니다.");
	else if (score >= 40 && score <= 59) printf("C등급입니다.");
	else if (score >= 20 && score <= 39) printf("D등급입니다.");
	else if (score >= 0 && score <= 19) printf("E등급입니다.");
	return 0;
}