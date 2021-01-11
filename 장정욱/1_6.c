#include <stdio.h>
//6번
void print_matrix(int a[][3], int m, int n)
{
    printf("\n%d", a[m - 1][n - 1]);
}

int main()
{
    int a[3][3];
    int m, n;
    printf("행을 입력하시오: ");
    scanf_s("%d", &m);

    printf("열을 입력하시오: ");
    scanf_s("%d", &n);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = rand() % 10;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }//3x3행렬

    print_matrix(a, m, n);

    return 0;
}