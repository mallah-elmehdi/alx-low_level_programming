#include "main.h"

/**
 * free_grid - see the code
 * @grid: param
 * @height: param
 *
 * Return: Something.
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
