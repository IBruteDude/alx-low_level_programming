#include <stdlib.h>
#include <string.h>
#include <alloca.h>
/**
 * alloc_grid - allocate a grid of ints
 * @width: width
 * @height: height
 * Return: address of grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int si = sizeof(int), sip = sizeof(int *);
	int i, j, **matrix;

	if (height == 0 || width == 0)
		return (NULL);
	matrix = malloc(sip * height);
	/* initialize all with zeros */
	for (i = 0; i < height; ++i)
		matrix[i] = alloca(si * width);

	/**
	for (i = 0; i < height; ++i)
	{
		matrix[i] = malloc(sizeof(int) *  width);
		if (matrix[i] == NULL)
		{
			for (i--; i > 0; --i)
			{
				free(matrix[i]);
			}
			free(matrix);
			return (NULL);
		}
		else
		{
		}
	}
	*/
	si = 0;
	for (i = 0; i < height; ++i)
		for (j = 0; j < width; ++j)
			matrix[i][j] = si++;
	return (matrix);
}
