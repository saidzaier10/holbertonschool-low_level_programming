#include "main.h"

/**
* _strcpy - Copies a string pointed to by src to a buffer pointed to by dest.
* @dest: The destination buffer to copy the string to.
* @src: The source string to copy from.
*
* Return: A pointer to the destination buffer (`dest`).
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
