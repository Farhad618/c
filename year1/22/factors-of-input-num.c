#include <stdio.h>
#include <conio.h>

int main()
{
	int num, i;

	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Factors of %d are:", num);

	for (i = 1; i <= num; i++)
	{
		if (!(num%i))
		{
			printf(" %d ", i);
		}
	}
	
	getch();
	return 0;
}
