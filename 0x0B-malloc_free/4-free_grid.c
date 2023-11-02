#include <stdlib.h>
#include "main.h"

/**
 * free_grid - It's not bragging if you can back it up
 * Function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: input int grid to free.
 * @height: input int height of the grid.
 * Author - Nedu Robert
 * Return: Returns void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
