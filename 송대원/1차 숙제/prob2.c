#include <stdio.h>

main()
{
	int grade;
	printf("Input grade\n");
	scanf_s("%d", &grade);

	if ((grade >= 80) && (grade <= 100))
		printf("A\n");
	else if ((grade >= 60) && (grade < 80))
		printf("B\n");
	else if ((grade >= 40) && (grade < 60))
		printf("C\n");
	else if ((grade >= 20) && (grade < 40))
		printf("D\n");
	else if ((grade >= 0) && (grade < 20))
		printf("E\n");

	return 0;
}