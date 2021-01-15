#include <stdio.h>
int main(void)
{
	int i, j;
	int suma = 0;
	int suma_all = 0;
	int s[3][3] = {
		{0,1,2},{3,4,5},{6,7,8}
	};
	int(*p)=s;

	p = s;
	for (i = 0; i < 3; i++) {
		suma = 0;
		for (j = 0; j < 3; j++)
			suma += s[i][j];
		suma_all += suma;
	}
	printf("%d", suma_all);
	return 0;
}