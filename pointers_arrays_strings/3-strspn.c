#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The string to be checked.
* @accept: The characters to match in the prefix.
*
* Return: The number of bytes in the initial segment of s which consist only
*         of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}

		if (!found)
		{
			break;
		}

		s++;
	}

	return (count);
}
