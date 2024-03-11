#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars
* @size: the size of the memory to allocate
* @c: the character to initialize the array with
*
* Return: NULL if size = 0, or NULL if it fails
*         a pointer to the character array otherwise
*/
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)

	{
		arr[i] = c;
	}

	return (arr);
}
