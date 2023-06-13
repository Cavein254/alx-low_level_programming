#include "main.h"
#include <stdlib.h>

/**
 * free_grid -empties a multidimensional array.
 * @grid: array of integers.
 * @height: grid size.
 *
 * Return: does not return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
