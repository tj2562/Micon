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

	printf("이름을 입력하세요:");
	scanf("%s", p1.name);
	printf("성적을 입력하세요:");
	scanf("%lf", &p1.grade);
	printf("주소를 입력하세요:");
	scanf("%s", p1.address);
	
	printf("이름을 입력하세요:");
	scanf("%s", p2.name);
	printf("성적을 입력하세요:");
	scanf("%lf", &p2.grade);
	printf("주소를 입력하세요:");
	scanf("%s", p2.address);
	
	printf("이름: %s\n", p1.name);
	printf("성적: %lf\n", p1.grade);
	printf("주소: %s\n", p1.address);

	printf("이름: %s\n", p2.name);
	printf("성적: %lf\n", p2.grade);
	printf("주소: %s\n", p2.address);
}