

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
	struct student list[size];
	for (i = 0;i < size;i++)
	{
		printf("�̸��� �Է��Ͻÿ�.");
		scanf_s("%s", list[i].name,10);
		printf("������ �Է��Ͻÿ�.");
		scanf_s("%d", &list[i].grade);
		printf("�ּҸ� �Է��Ͻÿ�.");
		scanf_s("%s", list[i].address,10);

	}
	printf("%s%s\n", list[0].name, list[1].name);
	printf("%d\n", list[0].grade+ list[1].grade);
	printf("%s%s\n", list[0].address, list[1].address);



}