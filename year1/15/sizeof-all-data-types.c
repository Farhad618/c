#include <stdio.h>
#include <conio.h>

int main()
{
	int num1, num2, swap;

	printf(
	"(short int) allocates memory of              : %d bytes\n"
	"(unsigned short int) allocates memory of     : %d bytes\n"
	"(unsigned int) allocates memory of           : %d bytes\n"
	"(int) allocates memory of                    : %d bytes\n"
	"(long int) allocates memory of               : %d bytes\n"
	"(unsigned long int) allocates memory of      : %d bytes\n"
	"(long long int) allocates memory of          : %d bytes\n"
	"(unsigned long long int) allocates memory of : %d bytes\n"
	"(signed char) allocates memory of            : %d bytes\n"
	"(unsigned char) allocates memory of          : %d bytes\n"
	"(float) allocates memory of                  : %d bytes\n"
	"(double) allocates memory of                 : %d bytes\n"
	"(long double) allocates memory of            : %d bytes\n",
	sizeof(short int),   sizeof(unsigned short int), sizeof(unsigned int),  sizeof(int),
	sizeof(long int),    sizeof(unsigned long int),  sizeof(long long int), sizeof(unsigned long long int),
	sizeof(signed char), sizeof(unsigned char),      sizeof(float),         sizeof(double), sizeof(long double));
	
	getch();
	return 0;
}
/*
short int
unsigned short int
unsigned int
int
long int
unsigned long int
long long int
unsigned long long int
signed char
unsigned char
float
double
long double

short int              : 2 bytes
unsigned short int     : 2 bytes
unsigned int           : 4 bytes
int                    : 4 bytes
long int               : 4 bytes
unsigned long int      : 4 bytes
long long int          : 8 bytes
unsigned long long int : 8 bytes
signed char            : 1 bytes
unsigned char          : 1 bytes
float                  : 4 bytes
double                 : 8 bytes
long double            : 16 bytes


*/