#include "main.h"
#include <stdio.h>
/**
* _atoi - Converts a string to an integer.
* @s: The string to convert.
*
* Return: The converted integer, or 0 if no valid digits found.
*/
int _atoi(char *s)
{
	int num = 0;

	int sign = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
	}

	return (num * sign);
}
