// fahrenheit-to-centigrade.c
#include <stdio.h>
#include <conio.h>

int main()
{
	float inFah;
	printf("Enter a fahrenheit value:\n");
	scanf("%f", &inFah);
	printf("Centigrade value of %f°F is: %f°C", inFah, (inFah - 32) * 5/9);

	getch();
	return 0;
}