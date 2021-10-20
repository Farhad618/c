//decimal to binary converter
#include <stdio.h>
#include <conio.h>

int main()
{
	int num, binary, i=1;

	printf("Enter a decimal number: ");
	scanf("%d", &num);
	printf("Binary value of %d is: ", num);
	
	while (num>0) {
		binary += (num%2)*i;
		num /= 2;
		i*=10;	
	}

	printf("%d", binary);
	
	getch();
	return 0;
}
