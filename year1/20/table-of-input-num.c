#include <stdio.h>
#include <conio.h>

int main()
{
	int num, i;

	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Table of %d is: \n", num);

	for (i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d \n", num, i, num*i);
	}
	
	getch();
	return 0;
}
