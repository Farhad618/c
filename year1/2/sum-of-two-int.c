#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1, num2;

	printf("Enter two integers\n");
	scanf("%d %d", &num1, &num2);
	printf("Sum of %d and %d is %d", num1, num2, num1+num2);
	return 0;
}