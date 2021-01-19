#include<stdio.h>
struct Student
{
    char name[10];
    int grade;
    char address[50];


};

int main()
{

    struct Student s;

    printf("이름을 입력하세요");
    scanf_s("%s", &s.name,10);

    printf("성적을 입력하세요");
    scanf_s("%d", &s.grade);

    printf("주소를 입력하세요");
    scanf_s("%s", &s.address,50);

    printf("이름 : %s", s.name);
    printf("성적 : %d", s.grade);
    printf("주소 : %s", s.address);


    return 0;
}