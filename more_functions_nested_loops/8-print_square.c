#include "main.h"

/**
* print_square - Prints a square of size using #.
* @size: The size of the square.
*
* Return: Void (no return value).
*/
void print_square(int size)
{
	int i = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
