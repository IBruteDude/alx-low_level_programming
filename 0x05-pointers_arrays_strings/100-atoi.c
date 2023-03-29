#include <ctype.h>
#include "main.h"
#define dig(c) ('0' <= c && c <= '9')
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

	while (!dig(*s))
		s++;
	if (*s == 0)
		return (0);
	if (*(s - 1) == '-' && !isspace(*(s - 2)))
		neg = 1;
	while (dig(*s))
	{
		dl++;
		pow *= 10;
		s++;
	}
	p = s;
	s -= dl;
	while (s != p)
	{
		pow /= 10;
		n += pow * (*s - '0');
		s++;
	}
	return ((neg) ? -n : n);
}
