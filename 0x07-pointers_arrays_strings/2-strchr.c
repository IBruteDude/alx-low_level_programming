#include "main.h"
/**
 * _strchr - search for c in s
 * @s: input string
 * @c: character query
 * Return: output string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
		if (*(s++) == c)
			return (s - 1);
	return (void *) 0;
}
