#include <stdio.h>


void findsosu(int num)
{

	int n,i;
	int k=0;

	printf("�Է��� ���������� �Ҽ��� : ");
   for(n=1; n<=num; n++)
   {
      for(i=2; i<n; i++)
         {
            if(n%i==0)
               k=1;
         }
	  //�Է¹��� �������� ��������� �������� �������� 0�� ���� ������ k�� 1�� ����
      if(k==0)
         printf("%d ",n);
	  //k���� 1�� ������ ������ �Ҽ��̸� �� ���� ���
      k=0;
	  //k�� �ʱ�ȭ
   }
   printf("\n\n");

}

int main(void)
{
   int num;

   printf("������ �Է��Ͻÿ� : ");
   scanf_s("%d",&num);
   printf("\n");
   findsosu(num);

   return 0;
}