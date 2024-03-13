#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees a 2D array of integers.
* @grid: A pointer to the 2D array of integers to be freed.
* @height: The height of the grid.
*
* Description: This function takes a pointer to a 2D array (grid)
* and its height, then frees the memory allocated for the grid.
* It first frees each row of the grid and then frees the grid itself.
* Return: void.
*/
void free_grid(int **grid, int height)
{
	int count;

	count = 0;
	while (count < height)
	{
		free(grid[count]);
		count++;
	}
	free(grid);
}
