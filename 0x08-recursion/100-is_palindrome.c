#include "main.h"

/**
 * _ - recurse for me
 *
 * @s: input string
 * @l: string length
 * @i: counter
 * Return: 1 if the string is palindrome, else 0
 */
int _(char *s, int l, int i)
{
	if (i >= l - i)
		return (1);
	return ((s[i] == s[l - i - 1]) && _(s, l, i + 1));
}

/**
 * is_palindrome - determine if a string is palindrome or not
 *
 * @s: input string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (s == NULL || *s == '\0')
		return (1);
	return (_(s, strlen(s), 0));
}
