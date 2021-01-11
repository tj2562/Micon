#include<stdio.h>
int main(void) {
	int i, j, n;
	printf("정수를 입력하시오:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 2; j < i; j++) {
			if ((i % j) == 0) break;//나누어 떨어지는 수가있으면 소수가아님
		}
		if (j == i) printf("%4d", i);//나머지계산하는 반복문을 끝까지 하면 소수라는 의미고 i=j가됨.
	}
	return 0;
}