#include <stdio.h>
#define sizerow 3
#define sizecol 3

void addmat(int *arra)
{
	int k,l,result=0;

	for(k=0; k<sizerow; k++)
      for(l=0; l<sizecol; l++)
         result+=*(arra+k*sizerow+l);

   printf("��� ���ҵ��� �� �� : %d\n",result);

}


int main(void)
{
   int i,j;//i�� ��, j�� ��
   int arr[sizerow][sizecol];

   printf("3X3����� ���Ҹ� �� ������� �Է��Ͻÿ� : ");

   for(i=0; i<sizerow; i++)
      for(j=0; j<sizecol; j++)
         scanf("%d", &arr[j][i]);

   addmat(*arr);

   return 0;

}