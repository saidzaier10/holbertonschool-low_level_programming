#include "main.h"

/**
* times_table - Prints the multiplication table up to 9x9.
* Return: Nothing.
*/
void times_table(void)
{

	int num1 = 0, num2 = 0;

	while (num1 <= 9)
	{
		while (num2 <= 9)
		{
			int product = num1 * num2;
			if (num2 == 0)
			{
				_putchar('0');
			}
			else if (product <= 9) 
			{
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			num2++;
		}
		_putchar('\n');
		num2 (0);
		num1++;
	}
}

