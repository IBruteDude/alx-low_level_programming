#include <string.h>
/**
 * _strncat - string catenation
 * @dest: destination
 * @src: source
 * @n: limit
 * Description: concatenate atmost n from source
 * Return: destination pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dsize = strlen(dest), ssize = strlen(src);

	for (i = 0; i <= ssize && i < n; ++i)
		dest[dsize + i] = src[i];
	return (dest);
}
