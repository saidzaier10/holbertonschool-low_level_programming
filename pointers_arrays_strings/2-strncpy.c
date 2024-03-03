/* 2-strncpy.c */

#include "main.h"

/**
* _strncpy - Copies at most n bytes from source to destination
* @dest: Destination string
* @src: Source string
* @n: Maximum number of bytes to copy
*
* Return: Pointer to the resulting string `dest`
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
