#include <stdio.h>
#include <conio.h>

int main()
{
	float sub1, sub2, sub3, sub4, sub5, total;

	printf("Bengali : "); scanf("%f", &sub1);
	printf("English : "); scanf("%f", &sub2);
	printf("Math    : "); scanf("%f", &sub3);
	printf("Physics : "); scanf("%f", &sub4);
	printf("Computer: "); scanf("%f", &sub5);

	total = sub1+sub2+sub3+sub4+sub5;

	printf("Total of the subjects is: %f\n", total);
	printf("Percentage of the total is: %f", total/5);
	getch();
	return 0;
}