#include <stdio.h>
#include <conio.h>

int main()
{
	int num, i;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (!(num%i))
		{
			printf("%d is a not prime number.", num);

			getch();
			return 0;
		}
	}
	
	printf("%d is a prime number.", num);

	getch();
	return 0;
}
