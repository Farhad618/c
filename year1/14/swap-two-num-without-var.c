#include <stdio.h>
#include <conio.h>

int main()
{
	int num1, num2;

	printf("Enter two numbers:\n");
	scanf("%d %d", &num1, &num2);

	num1 = num1+num2;
	num2 = num1-num2;
	num1 = num1-num2;

	printf("Now the first number is: %d\n", num1);
	printf("Now the second number is: %d", num2);
	
	getch();
	return 0;
}

