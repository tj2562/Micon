#include <stdio.h>
int main(void)
{
	int i, j;
	scanf_s("%d %d", &i, &j);
	int s[3][3] = {
		{0,1,2},{3,4,5},{6,7,8}
	};
	int(*p)[3]= s;

	printf("%d", p[i][j]);

	return 0;
}