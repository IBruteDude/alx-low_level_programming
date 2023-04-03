#include "main.h"
/**
 * _memcpy - set first n bytes of n to b
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: output string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		dest[n] = src[n];
	return (dest);
}

