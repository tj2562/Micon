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

	printf("捞抚: ");
	scanf("%s", num1.name);
	printf("己利: ");
	scanf("%d", &num1.grade);
	printf("林家: ");
	scanf("%s", num1.address);

	printf("捞抚: ");
	scanf("%s", num2.name);
	printf("己利: ");
	scanf_s("%d", &num2.grade);
	printf("林家: ");
	scanf("%s", num2.address);

	printf("捞抚: %s , 己利: %d, 林家: %s\n", num1.name, num1.grade, num1.address);
	printf("捞抚: %s , 己利: %d, 林家: %s", num2.name, num2.grade, num2.address);
}