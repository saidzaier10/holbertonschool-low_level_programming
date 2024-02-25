#include "main.h"

/**
* print_sign - Prints the sign of a number.
* @n: The number to check.
*
* Return: 1 if n is positive, 0 if n is zero, -1 otherwise.
* Also prints the sign (+, 0, -) to stdout.
*/
int print_sign(int n)
{
	int result;

		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (n == 0)
		{
			_putchar('0');
			return = (0);
		}
		else
		{
			_putchar('_');
			return = (-1);
		}
}

