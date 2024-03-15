#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Returns a pointer to a 2-dimensional array of integers.
* @width: The width of the array.
* @height: The height of the array.
*
* Description: Each element of the array is initialized to 0.
* If width or height is 0 or negative, returns NULL.
* Return: A pointer to the 2D array, or NULL on failure.
*/
int **alloc_grid(int width, int height)
{
	int **array;

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			while (i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

return (array);
}
