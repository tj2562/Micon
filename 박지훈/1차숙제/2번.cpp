#include <stdio.h>
void main() {
	printf("������ �Է��Ͻÿ�\n");
	int score;
	scanf("%d", &score);
	if (score > 100 || score < 0)
		printf("�߸��Է��Ͽ����ϴ�");
	else if (score >= 80)
		printf("A�Դϴ�");
	else if (score >= 60)
		printf("B�Դϴ�");
	else if (score >= 40)
		printf("C�Դϴ�");
	else if (score >= 20)
		printf("D�Դϴ�");
	else if (score >= 0)
		printf("E�Դϴ�");
	
}