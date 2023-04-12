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
	int si = sizeof(int), sip = sizeof(int *);
	int i, j, **matrix, **temp;

	if (height == 0 || width == 0)
		return (NULL);

	/* allocate space for a block of pointers to adjacent int blocks */
	matrix = malloc((sip * height) + (si * height * width));
	temp = malloc(sip * height);
	if (matrix == NULL || temp == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		temp[i] = matrix[i] = malloc(si * width);
		if (temp[i] == NULL)
			return (NULL);
		memcpy(matrix[i], (int *) 	/* cast back to a pointer */
		/* manipulate address of matrix with integer arithmetic */
			       	(((long) matrix)
		/* pointer array offset */
				+ (height * sip)
		/* integer arrays offset */
				+ (i * width * si)) 
				, sip);
	}
	/* initialize all with zeros */
	si = 0;
	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
			matrix[i][j] = si;
		free(temp[i]);
	}
	free(temp);

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
			for (j = 0; j < width; ++j)
				matrix[i][j] = 0;
		}
	}
	*/
	return (matrix);
}
