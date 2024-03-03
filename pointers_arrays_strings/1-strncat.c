#include "main.h"

/**
* _strncat - Concatenates two strings, using at most n bytes from src
* @dest: Destination string
* @src: Source string
* @n: Maximum number of bytes to use from src
*
* Return: Pointer to the resulting string `dest`
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;

	int src_len = 0;

	int i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;

	while (i < n && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
