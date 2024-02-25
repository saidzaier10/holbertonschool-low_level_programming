#include "main.h"

/**
 * print_alphabet_x10 - Prints all the alphabet 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter = 'a';

		while (count < 10)
		{
			while (letter <= 'z')
			{
				_putchar(letter);
				letter++;
			}
			_putchar('\n');
			letter = 'a';
			count++;
		}
}

