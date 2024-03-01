#include "main.h"

/**
 * print_diagonal - Prints a diagonal line using the character "\".
 * @n: The number of times the character "\" should be printed.
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}		
	while (a < n)
	{
		b = 0;

		while (b < a)
		{
			_putchar (' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
}
