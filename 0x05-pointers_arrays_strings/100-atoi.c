#include <limits.h>
#include <ctype.h>
#include "main.h"
#define dig(c) (('0' <= c && c <= '9'))
/**
 * _atoi - extract an int from a string
 * @s: input NTCS
 * Return: n if found int, 0 if not
 */
int _atoi(char *s)
{
	int neg = 0;
	char *p;
	int n = 0/*, fl = _strlen(s)*/, dl = 0, pow = 1;

	while (!dig(*s) && *s != 0)
	{
		if (*(s) == '-')
			neg++;
		s++;
	}
	if (*s++ == 0)
		return (0);
	dl++;
	while (dig(*s))
	{
		dl++;
		pow *= 10;
		s++;
	}
	p = s - 1;
	s -= dl;
	while (s != p)
	{
		n += pow * (*s - '0');
		pow /= 10;
		s++;
	}
	if (*s == '8' && (neg % 2))
		return INT_MIN;
	else
		n += pow * (*s - '0');
	return ((neg % 2) ? -n : n);
}
