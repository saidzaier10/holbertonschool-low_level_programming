#include "main.h"

/**
* rev_string- Prints a string in reverse, followed by a new line.
* @s: The pointer to the string to print.
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		_putchar(s[i]);
	}

	i--;
	_putchar('\n');

	while (i >= 0)
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
