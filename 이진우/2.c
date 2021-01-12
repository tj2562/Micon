// 점수를 입력받으면 등급을 출력하는 프로그램
#include <stdio.h>

int main(void)
{
	int score;

	printf("성적을 입력하지오:");
	scanf("%d", &score);

	
	if (score >= 80 && score <= 100)
		printf("점수는 A\n");

	else if (score >= 60 && score < 80)
		printf("점수는 B\n");

	else if (score >= 40 && score < 60)
		printf("점수는 C\n");

	else if (score >= 20 && score < 40)
		printf("점수는 D\n");

	else if (score >= 0 && score < 20)
		printf("점수는 E\n");

	else 
		printf("성적을 잘못 입력하셨습니다.\n");

	
	return 0;
}