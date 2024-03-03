#include "main.h"

/**
* print_triangle - Prints a triangle using #.
* @size: The size of the triangle.
*
* Return: Void (no return value).
*/
void print_triangle(int size)
{
	int i = 1, j = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i <= size)
		{
			while (j <= size - i)
			{
				_putchar(' ');
				j++;
			}
			j = 1;
			while (j <= i)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
