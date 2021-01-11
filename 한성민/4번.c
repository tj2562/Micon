#include<stdio.h>

void Function(int num)
{
	for (int i = 1; i <= num; i++)
	{
		int i_is_prime = 1;
		if (i < 2) {
			i_is_prime = 0;
		}
		else {
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					i_is_prime = 0;
					break;
				}
			}
		}
		if (i_is_prime)
		{

			printf("%d\n", i);
		}
	}
}
int main()
{
	

	//4
	int input;
	printf("소수를 찾을 범위를 입력하세요\n");
	scanf_s("%d", &input);
	Function(input);

}