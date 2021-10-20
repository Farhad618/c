#include <stdio.h>
#include <conio.h>

int main()
{
	float num1, num2;
	char operator = '+';

	printf("Enter two numbers: ");
	scanf("%f %f", &num1, &num2);
	printf("Enter a operator: ");
	scanf(" %c", &operator);

	switch (operator) {
		case '+' :
			printf("Sum of %f and %f is: %f\n", num1, num2, num1+num2);                              break;
		case '-' :
			printf("Difference of %f and %f is: %f\n", num1, num2, num1-num2);                       break;
		case '*' :
			printf("Product of %f and %f is: %f\n", num1, num2, num1*num2);                          break;
		case '/' :
			printf("Quotient of %f and %f is: %f\n", num1, num2, num1/num2);                         break;
		case '%' :
			printf("Remainder of %d and %d is: %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);  break;
		default :
			printf("+ - * / %c are valid operators.\n", '%');

	}

	getch();
	return 0;
}
