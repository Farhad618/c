#include <stdio.h>

int main()
{
	char chr;

	printf("Enter a charecter:\n");
	scanf("%c", &chr);

	switch (chr) {
		case 'a':case 'e':case 'i':case 'o':case 'u':
			printf("%c is a vowel", chr);                  break;
		case '1':case '2':case '3':case '4':case '5':
		case '6':case '7':case '8':case '9':case '0':
			printf("%c is a number", chr);                 break;
		default:
			printf("%c is a consonent", chr);              break;

	}
	return 0;
}