// perimeter-area-of-rectangle.c
#include <stdio.h>
#include <conio.h>

int main()
{
	int num1, num2, gcd, a, b;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	a=num1;
	b=num2;

	while (gcd = num1%num2) {		
		num1 = num2;
		num2 = gcd;
	}

	printf("G.C.D of %d and %d is: %d\n", a, b, num2);
	printf("L.C.M of %d and %d is: %d\n", a, b, (a*b)/num2);

	getch();
	return 0;
}
/*
int main()
{
	int num1, num2, gcd, a, b;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	a=num1;
	b=num2;
	
	printf("G.C.D of %d and %d is: ", num1, num2);

	do {
		gcd = num1%num2;
		num1 = num2;
		num2 = gcd;
	} while (gcd>0);

	
	printf("%d\n", num1);

	getch();
	return 0;
}*/