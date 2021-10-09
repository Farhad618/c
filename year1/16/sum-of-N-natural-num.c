#include <stdio.h>
#include <conio.h>

int main()
{
	int n, i, sum;

	printf("Enter a natural number: ");
	scanf("%d", &n);
	printf("All nautral numbers till %d are:\n", n);
	for (i = 0; i <= n; i++)
	{
		// strcat(strn, i);
		// char * __cdecl strcat(char * __restrict__ strn,const char * __restrict__ i);

		printf("%d ", i);
		if (!(i%5))
		{
			printf("\n");
		}

		sum+=i;
	}
	
	printf("\nSum of all natural numbers till %d is: %d \n", n, sum);

	getch();
	return 0;
}
