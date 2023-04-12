#include <stdlib.h>
/**
 * alloc_grid - allocate a grid of ints
 * @width: width
 * @height: height
 * Return: address of grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, **matrix = malloc(sizeof(int) * height);
	
	if (matrix == NULL)
		return NULL;
	for (i = 0; i < height; ++i)
	{
		matrix[i] = malloc(sizeof(int) *  width);
		if (matrix[i] == NULL)
			return NULL;
	}
	return matrix;
}
