#include <stdio.h>

#define size 2
struct student
{
	char name[10];
	int grade;
	char address[10];

};

int main(void)
{
	int i;
	struct student list[size]
		for ( i = 0;i < size;i++)
		{
			pirntf("�̸��� �Է��Ͻÿ�.");
			scanf_s("%s", list[i].name);
			printf("������ �Է��Ͻÿ�.");
			scanf_s("%d", &list[i].grade);
			printf("�ּҸ� �Է��Ͻÿ�.");
			scanf_s("%s", list[i].address);

		}
	printf("%s%s", list[0].name, list[1].name);
	printf("%d%d", list[0].grade, list[1].grade);
	printf("%s%s", list[0].address, list[1].address);



}