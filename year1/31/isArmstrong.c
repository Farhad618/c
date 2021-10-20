#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int num, i=1, power=0, isArm;

	printf("Enter a number: ");
	scanf("%d", &num);


	//to calculate the length of the inputed num
	while (num/i) {
		i*=10;
		power++;
	}

	i = num;

	while (i>0) {
		isArm += pow(i%10, power);
		i /= 10;
	}

	if (num == isArm)
	{
		printf("%d is a armstrong number.", num);
	}
	else {
		printf("%d is not a armstrong number.", num);
	}

	getch();
	return 0;
}

/*
some armstrong numbers
1>	0, 1, 2, 3, 4, 5, 6, 7, 8, 9
3>	153, 370, 371, 407
4>	1634, 8208, 9474
5>	54748, 92727, 93084
6>	548834
7>	1741725, 4210818, 9800817, 9926315
8>	24678050, 24678051, 88593477
9>	146511208, 472335975, 534494836, 912985153
*/