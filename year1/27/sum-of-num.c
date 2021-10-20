#include <stdio.h>
#include <conio.h>

int main()
{
	int num, sum;

	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Sum of all digits of %d is: ", num);

	while (num>0) {
		sum += num%10;
		num /= 10;		
	}

	printf("%d", sum);
	
	getch();
	return 0;
}
