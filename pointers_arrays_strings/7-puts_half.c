#include "main.h"

/**
* puts_half - Prints half of a string.
* @str: The string to print from.
*/
void puts_half(char *str)
{
	int len = 0;

	int half;

	while (str[len] != '\0')
		len++;

	half = len / 2;

	if (len % 2 != 0)
		half++;

	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}
