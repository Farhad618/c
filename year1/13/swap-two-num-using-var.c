#include <stdio.h>
#include <conio.h>

int main()
{
	int num1, num2, swap;

	printf("Enter two numbers:\n");
	scanf("%d %d", &num1, &num2);

	swap = num1;
	num1 = num2;
	num2 = swap;

	printf("Now the first number is: %d\n", num1);
	printf("Now the second number is: %d", num2);
	getch();
	return 0;
}