#include <stdio.h>
#define sizerow 3
#define sizecol 3

int main(void)
{
   int i,j,k,o;//i�� ��, j�� ��
   int arr[sizerow][sizecol];
   int (*p)[sizerow] = arr;



   printf("3X3����� ���Ҹ� �� ������� �Է��Ͻÿ� : ");

   for(i=0; i<sizerow; i++)
      for(j=0; j<sizecol; j++)
         scanf("%d", &p[i][j]);



   printf("������ �� �Է� : ");
   scanf("%d",&k);
   printf("������ �� �Է� : ");
   scanf("%d",&o);


   printf("\n�ش� ���� : %d\n",*(*(arr+k-1)+o-1));

   

   return 0;

}
