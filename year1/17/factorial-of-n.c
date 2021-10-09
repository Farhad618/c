// factorial-of-n.c
#include <stdio.h>
#include <conio.h>

int main()
{
	int n, i;
	unsigned long long int fact=1;

	printf("Enter a natural number: "); // between 0 - 65
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		fact *= i;		
	}

	printf("Factorial of %d is %llu \n", n, fact);	
	getch();
	return 0;
}
