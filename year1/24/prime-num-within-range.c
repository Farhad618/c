#include <stdio.h>
#include <conio.h>

int main()
{
	int from, to, i;

	printf("Enter a range: ");
	scanf("%d %d", &from, &to);

	for (int j = from; j <= to; j++)
	{
		// printf("%d is checking\n", j);
		for (i = 2; i < j; i++)
		{
			if (!(j%i))
			{
				// printf("%d not prime\n", j);
				
				// continue;
				break;
			}
			printf("%d prime\n", j);
			break;
			
		}
		
		
	}

	
	

	getch();
	return 0;
}
