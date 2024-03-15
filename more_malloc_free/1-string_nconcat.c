#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings, taking the first n bytes of s2
* @s1: The first string
* @s2: The second string
* @n: The number of bytes of s2 to concatenate
*
* Return: Pointer to the concatenated string, or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0, index_s1 = 0, index_s2 = 0;

	char *concatenated_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	concatenated_string = malloc(sizeof(char) * (len_s1 + n + 1));
	if (concatenated_string == NULL)
		return (NULL);

	while (index_s1 < len_s1)
	{
		concatenated_string[index_s1] = s1[index_s1];
		index_s1++;
	}

	while (index_s2 < n)
	{
		concatenated_string[index_s1 + index_s2] = s2[index_s2];
		index_s2++;
	}

	concatenated_string[index_s1 + index_s2] = '\0';

	return (concatenated_string);
}
