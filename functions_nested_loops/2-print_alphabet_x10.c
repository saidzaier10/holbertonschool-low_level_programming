#include "main.h"

/**
  *Write a function that prints 10 times the alphabet, in lowercase
  *
  *return: Always 0.
  */
void print_alphabet_x10(void)
{
	char c/*je déclare mes deux variables pour mes boucles*/
	int i

	i = 0;
	while (i < 10)/*j'initie ma première boucle*/
	{
		c = 'a';
		while (c <= 'z')/*j'initie ma deuxième boucle dans la première*/
		{
			_putchar(c);/*j'affiche mon caractère*/
			c++;/*je l'incrémente*/
		}
		_putchar('\n');
		i++;
	}
}
