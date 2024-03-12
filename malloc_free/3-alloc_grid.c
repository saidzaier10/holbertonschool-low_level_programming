#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Pointer to the allocated 2D array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int w, h;
    
    if (width <= 0 || height <= 0)
    
    return NULL;
    
	grid = malloc(height * sizeof(int *));
    
    if (grid != NULL)
    {
		h = 0;
        while (h < height)
		{
            grid[h] = malloc(width * sizeof(int));

			if (grid[h] != NULL)
			{
                w = 0;
				while (w < width)
                {
                    grid[h][w] = 0;
                    w++;
                }
            }
            else
            {
                while (h >= 0)
                {
                    free(grid[h]);
                    h--;
				}
                free(grid);
                return NULL;
            }
            h++;
        }

        return grid;
    }

    return NULL;
}
