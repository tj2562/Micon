#include <stdio.h>

int main(void)
{
	int x;
	char grade;

	scanf_s("%d", &x);

	if (x >= 80)
		grade = 'A';
	else if (x >= 60)
		grade = 'B';
	else if (x >= 40)
		grade = 'C';
	else if (x >= 20)
		grade = 'D';
	else
		grade = 'E';

	printf("%c", grade);
	return 0;



}