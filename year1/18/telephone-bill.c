// telephone-bill.c
#include <stdio.h>
#include <conio.h>

int main()
{
	int calls;
	float totalBill=250;

	printf("Enter the number of telephone calls: ");
	scanf("%d", &calls);
	printf("Total bill of %d calls is ", calls);
	
	if (calls>=300){
		totalBill+= (calls-300)*1.20;
		calls-=calls-300;
	}
	if (calls>=200){
		totalBill+= (calls-200)*1;
		calls-=calls-200;
	}
	if (calls>=100){
		totalBill+= (calls-100)*0.80;
		calls-=calls-100;
	}

	printf("%frs.", totalBill);

	getch();
	return 0;
}

