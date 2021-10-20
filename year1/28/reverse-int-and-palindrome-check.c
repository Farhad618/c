#include <stdio.h>
#include <conio.h>

int main()
{
	int num, reverse, i=1, temp;
	

	printf("Enter a number: ");
	scanf("%d", &num);
	temp = num;

	while (num/i) {
		i*=10;
	}

	while (num>0) {
		i/=10;
		reverse += (num%10)*i;
		num /= 10;
	}

	printf("Reversed form of %d is: %d \n", temp,  reverse);
	
	if (temp == reverse)
	{
		printf("%d is a palindrome number.", temp);
	}
	else
	{
		printf("%d is not a palindrome number.", temp);
	}

	getch();
	return 0;
}
