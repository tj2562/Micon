#include <stdio.h>

int main() {
	int grade;
	char score;

	printf("점수을 입력:");
	scanf_s("%d", &grade);

	if (grade >= 80 && grade <= 100)
		score = 'A';
	else if (grade >= 60)
		score = 'B';
	else if (grade >= 40)
		score = 'C';
	else if (grade >= 20)
		score = 'D';
	else if (grade >= 0)
		score = 'E';

	printf("%c", score);


}