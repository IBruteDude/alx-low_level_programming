#include "main.h"

int skip_to(char *s1, char **s2p, char c)
{
	if (*s1 == '\0' && **s2p != '\0')
		return (0);
	if (c == '\0')
	{
		if (**s2p == '*')
		{
			(*s2p)++;
			skip_to(s1, s2p, c);
		}
	}
	else
	{
		if (**s2p == c)
		{
			(*s2p)++;
			skip_to(s1, s2p, c);
		}
		skip_to(s1, s2p, *s1);
	}
	if (wildcmp(s1 + 1, *s2p) == 0)
		return (skip_to(s1 + 1, s2p, '\0'));
	return (1);
}

/**
 * wildcmp - compare two strings using wildcards
 *
 * @s1: the first input string
 * @s2: the second input string (with wildcards)
 * Return: 1 if the two strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 != '*')
		return (0);
	return (skip_to(s1, &s2, '\0'));
}
