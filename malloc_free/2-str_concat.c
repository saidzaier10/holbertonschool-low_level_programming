#include "main.h"
#include <stdlib.h>

/**
* str_concat - function that concatenates two strings
* @s1: first string
* @s2: second string
*
* Return: Pointer to a newly allocated space in memory containing the
* concatenated strings, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *result;

	unsigned int len1 = 0;

	unsigned int len2 = 0;

	i = '0';
	j = '0';

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	result = malloc((len1 + len2 + 1) * sizeof(char));

	if (result != NULL)
	{
		while (i < len1)
		{
			result[i] = s1[i];
			i++;
		}

		while (j < len2)
		{
			result[i + j] = s2[j];
			j++;
		}

		result[i + j] = '\0';

		return (result);
	}

	return (NULL);
}
