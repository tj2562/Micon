//구조체를 이용하여 두 학생의 정보 출력하는 프로그램
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

	printf("학생1의 이름을 입력하시오:\n");
	scanf("%s", &s1.name);
	printf("학생1의 성적을 입력하시오:\n");
	scanf("%d", &s1.grade);
	printf("학생1의 주소를 입력하시오:\n");
	scanf("%s", &s1.address);

	printf("학생2의 이름을 입력하시오:\n");
	scanf("%s", &s2.name);
	printf("학생2의 성적을 입력하시오:\n");
	scanf("%d", &s2.grade);
	printf("학생2의 주소를 입력하시오:\n");
	scanf("%s", &s2.address);

	printf("학생1\n이름:%s\n성적:%d\n주소:%s\n\n", s1.name, s1.grade, s1.address);
	printf("학생2\n이름:%s\n성적:%d\n주소:%s\n", s2.name, s2.grade, s2.address);

	return 0;
}