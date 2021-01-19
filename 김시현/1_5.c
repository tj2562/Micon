#include<stdio.h>

#define row 3
#define col 3
int inputMatrix(int(*p)[3]);
int sumMatrix(int(*p)[3]);
//함수에서 전달인자로 사용할때 배열포인터는 int(*p)[col]
int main(void) {
	int array[row][col];
	int* p = array;

	inputMatrix(&array);
	printf("\n원소의 총합은%d입니다.", sumMatrix(array));
	//여기서 array 도되고 &array도되는데 왜?
	//참조에의한호출관련자세히찾아보기
	return 0;
}
int inputMatrix(int (*p)[3]) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d행%d열을 입력하시오:",i+1,j+1);
			scanf_s("%d", &p[i][j]);
		}
	}
	
}
int sumMatrix(int(* p)[3]) {
	int i, j,sum;
	sum = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			sum += p[i][j];
		}
	}
	return sum;
}