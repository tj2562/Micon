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

    printf("�̸��� �Է��ϼ���");
    scanf_s("%s", &s.name,10);

    printf("������ �Է��ϼ���");
    scanf_s("%d", &s.grade);

    printf("�ּҸ� �Է��ϼ���");
    scanf_s("%s", &s.address,50);

    printf("�̸� : %s", s.name);
    printf("���� : %d", s.grade);
    printf("�ּ� : %s", s.address);


    return 0;
}