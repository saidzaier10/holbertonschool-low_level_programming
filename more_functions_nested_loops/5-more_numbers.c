#include "main.h"
/**
* more_numbers - prints the numbers from 0 to 14 ten times.
*/

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar('1');
			}	
			_putchar('0' + (j % 10));
			j++;
		}
	_putchar ('\n');
	j = 0;
	i++;
	}
}
