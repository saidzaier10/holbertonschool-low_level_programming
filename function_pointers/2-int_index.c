#include "function_pointers.h"

/**
* int_index - recherche un entier dans un tableau
* @array: pointeur vers le tableau
* @size: nombre d'éléments dans le tableau
* @cmp: pointeur vers la fonction de comparaison
*
* Return: l'indice du premier élément pour lequel la fonction de comparaison
* ne retourne pas 0, -1 si aucun élément ne correspond ou si size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
