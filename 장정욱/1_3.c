#include <stdio.h>
//3��
int main()
{
    int a[100];
    int i = 0;

    while (1)
    {
        printf("������ �Է� :");
        scanf_s("%d", &a[i]);

        if (a[i] == 0) break;
        else i++;
    }
    int sum = 0;
    for (int j = 0; j <= i; j++)
    {
        sum += a[j];
    }
    printf("���� %d", sum);
    return 0;
}