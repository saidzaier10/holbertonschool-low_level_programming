#include "main.h"

/**
*void print_alphabet_x10(void) prints 10 times the alphabet
*
*return: Always 0.
*/
void print_alphabet_x10(void)
{
	char letter
	int numb

	numb = 0;
	while (numb < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		numb++;
	}
}
