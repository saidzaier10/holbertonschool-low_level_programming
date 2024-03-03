#include "main.h"

/**
* rev_string - Reverses a string.
* @s: The string to be reversed.
*/
void rev_string(char *s)
{
	char *start = s, *end = s;

	while (*end != '\0')
		end++;

	while (start < end)
	{
		char tmp = *start;

		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
