#include <stdio.h>

/**
* main - Point d'entrée du programme
*
* Return: Toujours 0 (Succès)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');

		if (i <= 9)
		{
			putchar (',');
			putchar (' ');
		}

		i++;
	}

	putchar('\n');

	return (0);
}
