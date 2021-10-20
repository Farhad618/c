// fibonacci-series-upto-desired-terms.c
#include <stdio.h>
#include <conio.h>

int main()
{
	int num;
	unsigned long long int a=0, b=1, c;

	printf("Enter the maximum terms: ");
	scanf("%d", &num);

	printf("Fibonacci series up to %d terms is:\n %d %d ", num, a, b);
	for (int i = 1; i < num; i++)
	{
		// printf("%llu %llu ", a, b);
		c = a+b;
		a = b;
		b = c;
		printf("%llu ", c);
	}
	
	getch();
	return 0;
}
