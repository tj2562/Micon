#include <stdio.h>
//6��
void print_matrix(int a[][3], int m, int n)
{
    printf("\n%d", a[m - 1][n - 1]);
}

int main()
{
    int a[3][3];
    int m, n;
    printf("���� �Է��Ͻÿ�: ");
    scanf_s("%d", &m);

    printf("���� �Է��Ͻÿ�: ");
    scanf_s("%d", &n);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = rand() % 10;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }//3x3���

    print_matrix(a, m, n);

    return 0;
}