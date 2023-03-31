#include <string.h>
/**
 * _strncpy - string catenation
 * @dest: destination
 * @src: source
 * @n: limit
 * Description: concatenate atmost n from source
 * Return: destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_end = 0;
	int i;

	for (i = 0; i <= ssize && i < n; ++i)
		if (dest[i] != '\0' && src[i] != '\0')
			dest[i] = src[i];
		else
			break
	return (dest);
}
