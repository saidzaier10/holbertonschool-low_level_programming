#include "function_pointers.h"

/**
* array_iterator - exécute une fonction sur chaque élément d'un tableau
* @array: pointeur vers le tableau
* @size: taille du tableau
* @action: pointeur vers la fonction à exécuter
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
