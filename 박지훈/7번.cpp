#include <stdio.h>
void main() {
	struct student {
		char name[10];
		int score;
		char adress[];
	};
	struct student s1;
	struct student s2;
	
	printf(" ù��° �л��� �̸��� �Է��Ͻÿ�");
	scanf("%s", &s1.name);
	printf("������ �Է��Ͻÿ�): ");	scanf("%d", &s1.score);
	printf("�ּҸ� �Է��Ͻÿ�): ");
	scanf("%s", &s1.adress);
	printf(" �ι�° �л��� �̸��� �Է��Ͻÿ�");
	scanf("%s", &s2.name);
	printf("������ �Է��Ͻÿ�): ");	scanf("%d", &s2.score);
	printf("�ּҸ� �Է��Ͻÿ�): ");
	scanf("%s", &s2.adress);

	printf("�й�: %s\n", s1.name);
	printf("�̸�: %d\n", s1.score);
	printf("����: %s\n", s1.adress);

	printf("�й�: %s\n", s2.name);
	printf("�̸�: %d\n", s2.score);
	printf("����: %s\n", s2.adress);

}