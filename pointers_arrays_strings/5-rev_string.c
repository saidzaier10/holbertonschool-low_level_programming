#include "main.h"

/**
* print_rev - Prints a string in reverse, followed by a new line.
* @s: The pointer to the string to print.
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		_putchar(s[i]);
	}

	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
