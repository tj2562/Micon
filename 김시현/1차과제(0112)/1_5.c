#include<stdio.h>

#define row 3
#define col 3
int inputMatrix(int(*p)[3]);
int sumMatrix(int(*p)[3]);
//�Լ����� �������ڷ� ����Ҷ� �迭�����ʹ� int(*p)[col]
int main(void) {
	int array[row][col];
	int* p = array;

	inputMatrix(&array);
	printf("\n������ ������%d�Դϴ�.", sumMatrix(array));
	//���⼭ array ���ǰ� &array���Ǵµ� ��?
	//����������ȣ������ڼ���ã�ƺ���
	return 0;
}
int inputMatrix(int (*p)[3]) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d��%d���� �Է��Ͻÿ�:",i+1,j+1);
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