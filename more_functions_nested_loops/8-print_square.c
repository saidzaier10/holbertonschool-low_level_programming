#include "main.h"

/**
* rev_string - Reverse a string.
* @s: The string to reverse.
*/
void rev_string(char *s)
{
	int i, j;

	char temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = 0;
	i--;

	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
