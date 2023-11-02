#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - If you even dream of beating me
 * you'd better wake up and apologize
 * Function that returns a pointer to a 2 dimensional array of integers.
 * @width: input int width of the grid.
 * @height: input int height of the grid.
 * Author - Nedu Robert
 * Return: Returns a pointer to a 2 dimensional array of integers.
 * It returns NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **grid = (int **)malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			grid[k][l] = 0;
		}
	}

	return (grid);
}
