#include <stdio.h>
void main() {
	struct student {
		char name[10];
		int score;
		char adress[];
	};
	struct student s1;
	struct student s2;
	
	printf(" 첫번째 학생의 이름을 입력하시오");
	scanf("%s", &s1.name);
	printf("점수를 입력하시오): ");	scanf("%d", &s1.score);
	printf("주소를 입력하시오): ");
	scanf("%s", &s1.adress);
	printf(" 두번째 학생의 이름을 입력하시오");
	scanf("%s", &s2.name);
	printf("점수를 입력하시오): ");	scanf("%d", &s2.score);
	printf("주소를 입력하시오): ");
	scanf("%s", &s2.adress);

	printf("학번: %s\n", s1.name);
	printf("이름: %d\n", s1.score);
	printf("학점: %s\n", s1.adress);

	printf("학번: %s\n", s2.name);
	printf("이름: %d\n", s2.score);
	printf("학점: %s\n", s2.adress);

}