#include <stdio.h>
int arrysum(int p[][3], int n);
void arrfind(int p[][3], int a, int b);
void main() {
	int sums=0, a[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3;j++) {
				int value;
				scanf_s("%d", &value);
				a[i][j] = value;
}}
	sums=sums+arrysum(a,3);
	printf("%d\n", sums);
	printf("찾는 원소의 행과 열 입력하시오");
	int x, y; scanf("%d""%d", &x, &y);
	arrfind(a, x, y);
}





int arrysum(int p[][3], int n) {
	int sum = 0;
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < 3; i++) {
			sum = sum + p[k][i];
		}
	}
	return sum;
}
void arrfind(int p[][3],int a,int b) {
	int c;
	a = p[a-1][b-1];
	printf("%d", a);
}