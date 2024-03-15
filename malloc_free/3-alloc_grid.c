#include <stdlib.h>
#include "main.h"

/**
 * @brief alloc_grid - Allocates a 2D array of integers.
 *
 * Allocates a 2D array of `int` with `height` rows and `width` columns.
 * Each element in the array is initialized to 0.
 *
 * @param width The width of the 2D array.
 * @param height The height of the 2D array.
 *
 * @return On success, a pointer to the allocated 2D array.
 *         On failure, NULL is returned.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		i++;
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
return (grid);
}

