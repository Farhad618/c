#include <stdio.h>
#include <conio.h>

int main()
{
	int num, i, j;

	printf("Enter a number: ");
	scanf("%d", &num);
	

	for (i = 1; i <= num; i++)
	{
		printf("Table of %d is: \n", i);
		for (j = 1; j <= 10; j++)
		{
			printf("%d * %d = %d \n", i, j, i*j);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
