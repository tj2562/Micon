#include <stdio.h>
#define sizerow 3
#define sizecol 3

int main(void)
{
   int i,j,k,o;//i가 행, j가 열
   int arr[sizerow][sizecol];
   int (*p)[sizerow] = arr;



   printf("3X3행렬의 원소를 행 순서대로 입력하시오 : ");

   for(i=0; i<sizerow; i++)
      for(j=0; j<sizecol; j++)
         scanf("%d", &p[i][j]);



   printf("원소의 행 입력 : ");
   scanf("%d",&k);
   printf("원소의 열 입력 : ");
   scanf("%d",&o);


   printf("\n해당 원소 : %d\n",*(*(arr+k-1)+o-1));

   

   return 0;

}
