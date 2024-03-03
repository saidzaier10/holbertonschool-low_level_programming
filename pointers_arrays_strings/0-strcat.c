#include "main.h"

/**
* _strcat - Concatenates two strings
* @dest: Destination string
* @src: Source string
*
* Return: Pointer to the resulting string `dest`
*/
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;

	int src_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;

	int i = 0;

	while (i < src_len)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
