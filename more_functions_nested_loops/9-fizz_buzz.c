#include <stdio.h>
#include "main.h"
/*
*
*/
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			_putchar("FizzBuzz ");
		else if (i % 3 == 0)
			_putchar("Fizz ");
		else if (i % 5 == 0)
			_putchar("Buzz ");
		else
			_putchar("%d ", i);
		i++;
	}

	_putchar("\n");

	return (0);
}
