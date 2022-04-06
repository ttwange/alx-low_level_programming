#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the allocation
 * @grid: the grid.
 * @height: columns
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	if (height != 0 && grid != NULL)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
