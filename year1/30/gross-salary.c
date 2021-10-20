// gross-salary.c
#include <stdio.h>
#include <conio.h>

int main()
{
	float basicSalary, grossSalary;

	printf("Enter the basic salary: ");
	scanf("%f", &basicSalary);

	if (basicSalary<=10000)
	{
		grossSalary+= basicSalary + (0.45*basicSalary) + (0.80*basicSalary);
	}
	else if (basicSalary<=20000)
	{
		grossSalary+= basicSalary + (0.25*basicSalary) + (0.90*basicSalary);
	}
	else if (basicSalary>20000)
	{
		grossSalary+= basicSalary + (0.30*basicSalary) + (0.95*basicSalary);
	}

	printf("Gross salary of the employ is: %frs.", grossSalary);

	getch();
	return 0;
}

