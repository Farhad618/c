#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	int rows, cols;

	printf("Enter the matrix's order: ");
	scanf("%d %d", &rows, &cols);

	int matrix[rows][cols];

	for (int m = 0; m < rows; m++)
	{
		for (int n = 0; n < cols; n++)
		{
			printf("Enter the value of cell no %d at row no %d: ", n+1, m+1);
			scanf("%d", &matrix[m][n]);
		}
	}

	printf("The matrix format is:\n");

	for (int m = 0; m < rows; m++)
	{
		for (int n = 0; n < cols; n++)
		{
			printf("%d  ", matrix[m][n]);
		}
		printf("\n");
	}

	getch();
	return 0;
}

