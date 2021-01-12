#include <stdio.h>
//4번
int main()
{
    int a;
    printf("정수를 입력 : ");
    scanf_s("%d", &a);
    for (int i = 2; i <= a; i++)
    {
        int k = 0;
        //printf("\n%d ", i);
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                k++;
            }
        }
        if (k == 2) printf("%d ", i);
    }
    return 0;
}