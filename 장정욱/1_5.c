#include <stdio.h>
//5��
void sum_ele(int* a, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(a + i);
    }
    printf("\n%d", sum);
}

int main()
{
    int a[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = rand() % 10;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }//3x3���
    int matrix_size = i * j;
    sum_ele(a, matrix_size);

    return 0;
}