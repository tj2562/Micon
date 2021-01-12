#include <stdio.h>
void main() {
	printf("점수를 입력하시오\n");
	int score;
	scanf("%d", &score);
	if (score > 100 || score < 0)
		printf("잘못입력하였습니다");
	else if (score >= 80)
		printf("A입니다");
	else if (score >= 60)
		printf("B입니다");
	else if (score >= 40)
		printf("C입니다");
	else if (score >= 20)
		printf("D입니다");
	else if (score >= 0)
		printf("E입니다");
	
}