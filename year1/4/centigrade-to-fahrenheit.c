// centigrade-to-fahrenheit.c
#include <stdio.h>

int main()
{
	float inCen;
	printf("Enter a centigrade value:\n");
	scanf("%f", &inCen);
	printf("Fahrenheit value of %f°C is: %f°F", inCen, inCen*1.8+32);
	return 0;
}