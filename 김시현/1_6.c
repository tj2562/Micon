#include<stdio.h>
#define row 3
#define col 3

int inputMatrix(int(*p)[3]);
int printMatrix(int(*p)[3]);

//함수에서 전달인자로 사용할때 배열포인터는 int(*p)[col]
int main(void) {
	int array[row][col];
	int* p = &array;

	inputMatrix(array);
	printf("입력한 3x3행렬을 출력하시오\n");
	printMatrix(array);
	return 0;
}
int inputMatrix(int(*p)[3]) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d행%d열을 입력하시오:", i + 1, j + 1);
			scanf_s("%d", &p[i][j]);
		}
	}

}
int printMatrix(int(*p)[3]) 
{
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%4d", p[i][j]);
		}
		printf("\n");
	}
}