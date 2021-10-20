//binary to decimal converter
#include <stdio.h>
#include <conio.h>

int main()
{
	int num, decimal, i=1;

	printf("Enter a binary number: ");
	scanf("%d", &num);
	printf("Decimal value of %d is: ", num);
	
	while (num>0) {
		if (num%10)
		{
			decimal += i;
		}
		i+=i;
		num /= 10;		
	}

	printf("%d", decimal);
	
	getch();
	return 0;
}
