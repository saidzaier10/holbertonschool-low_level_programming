#include "main.h"

/**
*void print_alphabet_x10(void) prints 10 times the alphabet
*
*return: Always 0.
*/
void print_alphabet_x10(void)
{
	char c
	int i

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
