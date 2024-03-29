#include "main.h"
#include <stdlib.h>

/**
* create_array - function that creates an array of chars
* @size: size of the array
* @c: char to initialize
*
* Return: Pointer of array or NULL if size = 0
*/

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
