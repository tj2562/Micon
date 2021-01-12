#include <stdio.h>


int sosoo(int num)
{
int i;

    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        return false;
    }

    return true;
}

int main()
{
    int i = 0, max = 0;

    printf("i want sosso:");
    scanf_s("%d", &max);

 
    for (i = 2; i <= max; i++)
    {
        if (sosoo(i))
        {
            printf("%d\n ", i);
            
        }
    }



    return 0;
}
