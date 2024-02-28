#include "main.h"

/**
 * print_line - Prints a straight line using the character "_".
 * @n: The number of times the character "_" should be printed.
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

