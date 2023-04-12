#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - allocate a grid of ints
 * @width: width
 * @height: height
 * Return: address of grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, **matrix = malloc(sizeof(int *) * height);

	if (height <= 0 || width <= 0 || matrix == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		matrix[i] = malloc(sizeof(int) *  width);
		if (matrix[i] == NULL)
		{
			for (i--; i >= 0; --i)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; ++j)
			matrix[i][j] = 0;
	}
	return (matrix);
}
