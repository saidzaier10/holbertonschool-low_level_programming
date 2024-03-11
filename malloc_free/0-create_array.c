#include <stdlib.h>
#include "main.h"

/**
* create_array - crée un tableau de caractères et l'initialise
* @size: la taille de la mémoire à allouer
* @c: le caractère pour initialiser le tableau
*
* Return : NULL si size = 0, ou NULL si l'allocation échoue
*           un pointeur vers le tableau de caractères sinon
*/
char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)

		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
