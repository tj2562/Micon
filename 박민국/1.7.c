#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

struct student
{
	char name[10];
	int grade;
	char address[50];
};

int main()
{
	struct student num1;
	struct student num2;

	printf("�̸�: ");
	scanf("%s", num1.name);
	printf("����: ");
	scanf("%d", &num1.grade);
	printf("�ּ�: ");
	scanf("%s", num1.address);

	printf("�̸�: ");
	scanf("%s", num2.name);
	printf("����: ");
	scanf_s("%d", &num2.grade);
	printf("�ּ�: ");
	scanf("%s", num2.address);

	printf("�̸�: %s , ����: %d, �ּ�: %s\n", num1.name, num1.grade, num1.address);
	printf("�̸�: %s , ����: %d, �ּ�: %s", num2.name, num2.grade, num2.address);
}