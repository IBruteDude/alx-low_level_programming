#include "main.h"
/**
 * _memset - set first n bytes of n to b
 * @s: input string
 * @b: char to be filled with
 * @n: number of bytes to be filled
 * Return: output string
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		s[n] = b;
	return (s);
}

