#include "main.h"
/**
 * _memset - set first n bytes of n to b
 * @s: input string
 * @b: char to be filled
 * @n: number of bytes to be filled
 * Return: output string
 */
void *_memset(void *s, char b, unsigned int n)
{
	while (n--)
		*((char *) s + n) = b;
	return (s);
}

