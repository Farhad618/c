#include <stdio.h>
#include <conio.h>

int main()
{
	int from, to, i, isPrime=1;

	printf("Enter a range: ");
	scanf("%d %d", &from, &to);
	printf("All prime numbers btween %d and %d are:\n", from, to);

	for (int j = from; j <= to; j++)
	{
		for (i = 2; i < j; i++)
		{
			if (j%i)
			{
				isPrime=1;
			}
			else
			{
				isPrime=0;
				break;
			}
		}

		if (isPrime)
		{
			printf("%d ", j);
		}
	}

	getch();
	return 0;
}
