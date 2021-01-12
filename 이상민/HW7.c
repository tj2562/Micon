#include <stdio.h>

int main()
{
	struct student {
		char name[10];
		int grade;
		int address;
	};

	struct student s;

	printf("捞抚 : ");
	scanf_s("%s", s.name, 9);

	printf("己利 : ");
	scanf_s("%d", &s.grade);

	printf("林家 : ");
	scanf_s("%d", &s.address);

	printf("\n 己利钎 \n");
	printf("捞抚:%s\n", s.name);
	printf("己利:%d\n", s.grade);
	printf("林家:%d\n", s.address);

}