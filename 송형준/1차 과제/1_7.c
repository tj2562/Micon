#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 

struct student
{
	char name[20];
	double grade;
	char address[200];
};

int main()
{
	struct student p1;
	struct student p2;

	printf("�̸��� �Է��ϼ���:");
	scanf("%s", p1.name);
	printf("������ �Է��ϼ���:");
	scanf("%lf", &p1.grade);
	printf("�ּҸ� �Է��ϼ���:");
	scanf("%s", p1.address);
	
	printf("�̸��� �Է��ϼ���:");
	scanf("%s", p2.name);
	printf("������ �Է��ϼ���:");
	scanf("%lf", &p2.grade);
	printf("�ּҸ� �Է��ϼ���:");
	scanf("%s", p2.address);
	
	printf("�̸�: %s\n", p1.name);
	printf("����: %lf\n", p1.grade);
	printf("�ּ�: %s\n", p1.address);

	printf("�̸�: %s\n", p2.name);
	printf("����: %lf\n", p2.grade);
	printf("�ּ�: %s\n", p2.address);
}