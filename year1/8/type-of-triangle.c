#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	float side1=0, side2=0, side3=0, angle1=0, angle2=0, angle3=0;
	char typeOfTri[] = "";

	printf("Enter the sides of the triangle: ");
	scanf("%f %f %f", &side1, &side2, &side3);
	printf("Enter the angles of the triangle: ");
	scanf("%f %f %f", &angle1, &angle2, &angle3);

	/*base of angles*/
	if (angle1 && angle2 && angle3)
	{
		if (angle1==90 || angle2==90 || angle3==90)
		{
			strcat(typeOfTri, " Right");
		}
		else if (angle1>90 || angle2>90 || angle3>90)
		{
			strcat(typeOfTri, " Acute");
		}
		else if (angle1<90 && angle2<90 && angle3<90)
		{
			strcat(typeOfTri, " Obtuse");
		}
	}

	/*base of sides*/
	if (side1 && side2 && side3)
	{
		if (side1==side2 && side2==side3 && side1==side3)
		{
			strcat(typeOfTri, " Equiltenal");
		}
		else if (side1==side2 || side2==side3 || side1==side3)
		{
			strcat(typeOfTri, " Isosceles");
		}
		else if (!(side1==side2 || side2==side3 || side1==side3))
		{
			strcat(typeOfTri, " Scalene");
		}
	}

	printf("This is a%s Triangle.\n", typeOfTri);

	getch();
	return 0;
}
