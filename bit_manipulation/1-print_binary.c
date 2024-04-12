#include "main.h"

/**
* print_binary - Prints the binary representation of a number
* @n: The number to be printed in binary
*/
void print_binary(unsigned long int n)
{
	/* Edge case: if n is 0, print '0' and return */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Recursive call for the bits to the left if n is not 0 */
	if (n > 1)
		print_binary(n >> 1);

	/* Print the rightmost bit of n */
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
