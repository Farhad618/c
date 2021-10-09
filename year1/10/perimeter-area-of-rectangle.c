// perimeter-area-of-rectangle.c
#include <stdio.h>
#include <conio.h>

int main()
{
	float length, width;

	printf("Enter the length: ");
	scanf("%f", &length);
	printf("Enter the width: ");
	scanf("%f", &width);

	printf("\nPerimeter of the rectangle is: %f\n", 2*(length + width));
	printf("Area of the rectangle is: %f\n", length * width);

	getch();
	return 0;
}
