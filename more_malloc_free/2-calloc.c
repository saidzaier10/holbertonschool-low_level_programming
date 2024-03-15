#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array and initializes it to 0
* @nmemb: Number of elements in the array
* @size: Size of each element
*
* Return: Pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	unsigned int total_size, i;

	char *ptr_char;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	ptr_char = (char *)ptr;
	for (i = 0; i < total_size; i++)
		ptr_char[i] = 0;

	return (ptr);
}
