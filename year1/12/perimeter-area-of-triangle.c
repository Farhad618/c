// perimeter-area-of-rectangle.c
#include <stdio.h>
#include <conio.h>

int main()
{
	float side1, side2, base, height;

	printf("Enter the first, second side and base: ");
	scanf("%f %f %f", &side1, &side2, &base);
	printf("Enter the height: ");
	scanf("%f", &height);

	if (side1!=0 && side2!=0 && base!=0 && height==0)
	{
		if (side1+side2 > base)
		{
			printf("\nPerimeter of the triangle is: %f\n", side1+base+side2);
		} else
		{
			printf("Enter valid sides of the triangle.\n");
		}
	}
	else if (side1==0 && side2==0 && base!=0 && height!=0)
	{
		printf("Area of the triangle is: %f\n", (height*base)/2);
	}
	else if (side1!=0 && side2!=0 && base!=0 && height!=0)
	{
		if (side1+side2 > base)
		{
			printf("\nPerimeter of the triangle is: %f\n", side1+base+side2);
		} else
		{
			printf("Enter valid sides of the triangle.\n");
		}
		printf("Area of the triangle is: %f\n", (height*base)/2);		
	}
	else
	{
		printf("Inputs are not valid.\n");
	}

	getch();
	return 0;
}
