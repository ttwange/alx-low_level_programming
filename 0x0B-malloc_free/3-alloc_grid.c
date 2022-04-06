#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: rows
 * @height: collumns
 *
 * Return: pointer to pointer to array, or NULL.
 */

int **alloc_grid(int width, int height)
{
	int **t;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	t = malloc(height * sizeof(int *));
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		t[i] = malloc(width * sizeof(int));
		if (t[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(t[i]);
			free(t);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			t[i][j] = 0;

	return (t);
}
