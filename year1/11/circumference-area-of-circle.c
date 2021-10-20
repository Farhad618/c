// perimeter-area-of-rectangle.c
#include <stdio.h>
#include <conio.h>

int main()
{
	float pi = 3.14;
	float radius;

	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);

	printf("\nCircumference of the circle is: %fcm\n", 2*pi*radius);
	printf("Area of the circle is: %fcm²\n", pi*(radius*radius));

	getch();
	return 0;
}