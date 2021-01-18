#include <stdio.h>


void findsosu(int num)
{

	int n,i;
	int k=0;

	printf("입력한 정수까지의 소수들 : ");
   for(n=1; n<=num; n++)
   {
      for(i=2; i<n; i++)
         {
            if(n%i==0)
               k=1;
         }
	  //입력받은 정수보다 작은수들로 나눴을때 나머지가 0인 수가 나오면 k를 1로 변경
      if(k==0)
         printf("%d ",n);
	  //k값이 1로 변하지 않으면 소수이며 이 값을 출력
      k=0;
	  //k값 초기화
   }
   printf("\n\n");

}

int main(void)
{
   int num;

   printf("정수를 입력하시오 : ");
   scanf_s("%d",&num);
   printf("\n");
   findsosu(num);

   return 0;
}