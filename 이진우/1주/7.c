//����ü�� �̿��Ͽ� �� �л��� ���� ����ϴ� ���α׷�
#include <stdio.h>

struct student
{
		char name[10];	
		int grade;
		char address[100];
};

int main(void)
{
	struct student s1;
	struct student s2;

	printf("�л�1�� �̸��� �Է��Ͻÿ�:\n");
	scanf("%s", &s1.name);
	printf("�л�1�� ������ �Է��Ͻÿ�:\n");
	scanf("%d", &s1.grade);
	printf("�л�1�� �ּҸ� �Է��Ͻÿ�:\n");
	scanf("%s", &s1.address);

	printf("�л�2�� �̸��� �Է��Ͻÿ�:\n");
	scanf("%s", &s2.name);
	printf("�л�2�� ������ �Է��Ͻÿ�:\n");
	scanf("%d", &s2.grade);
	printf("�л�2�� �ּҸ� �Է��Ͻÿ�:\n");
	scanf("%s", &s2.address);

	printf("�л�1\n�̸�:%s\n����:%d\n�ּ�:%s\n\n", s1.name, s1.grade, s1.address);
	printf("�л�2\n�̸�:%s\n����:%d\n�ּ�:%s\n", s2.name, s2.grade, s2.address);

	return 0;
}