#include <stdlib.h>
/**
 * free_grid - frees a grid of ints
 * @grid: input grid
 * @height: grid height
 */
void free_grid(int **grid, int height);
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; ++i)
			free(grid[i]);
		free(grid);
	}
}
