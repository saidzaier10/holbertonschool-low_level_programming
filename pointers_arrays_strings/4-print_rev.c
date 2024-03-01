#include "main.h"

/**
* print_rev - Prints a string in reverse, followed by a new line.
* @s: The pointer to the string to print.
*/
void print_rev(char *s)
{
	int len = 0, i;

	len(*s);
	{
		len++;
		s++;
	}

	s--;
	for (i = 0; i < len; i++)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
