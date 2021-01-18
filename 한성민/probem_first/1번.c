#include <stdio.h>
int main()
{
	//1
	int Num1, Num2;
	int PLUS, MINUS, TIMES, DIVIDE;

	printf("숫자 하나를 입력하세요\n");
	scanf_s("%d", &Num1);
	printf("또다른 숫자 하나를 입력하세요\n");
	scanf_s("%d", &Num2);
	PLUS = Num1 + Num2;
	MINUS = Num1 - Num2;
	TIMES = Num1 * Num2;
	DIVIDE = Num1 / Num2;
	printf("사칙연산의 결과입니다\n");
	printf("더하기=%d\n", PLUS);
	printf("빼기=%d\n", MINUS);
	printf("곱하기=%d\n", TIMES);
	printf("나누기=%d\n", DIVIDE);
	return 0;
}