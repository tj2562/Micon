#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int score;
	scanf("%d", &score);

	if (score <= 100 && score >= 80)
		printf("이번 시험등급은 A입니다.");
	else if (score <= 79 && score >= 60)
		printf("이번 시험등급은 B입니다");
	else if (score <= 59 && score >= 40)
		printf("이번 시험등급은 C입니다");
	else if (score <= 39 && score >= 20)
		printf("이번 시험등급은 D입니다");
	else if (score <= 19 && score >= 0)
		printf("이번 시험등급은 E입니다");
	else
		printf("다시 입력해주세요");
}