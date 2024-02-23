#include <stdio.h>

/**
* main - Point d'entrée du programme
*
* Return: Toujours 0 (Succès)
*/

int main(void)
{
	int i  = 0;
	char alph = 'a';

	while (i <= 9)
	{
		putchar i;

		i++;
	}

	while (alph <= 'f')
	{
		putchar alph;

		alph++;
	}

	putchar('\n');


	return (0);
}

