#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicates a string
 * @str: input string
 * Return: duplicate string
 */
char *_strdup(char *str)
{
	if (str != NULL)
	{
		int s = strlen(str) + 1;
		char *dup = malloc(s);

		if (dup == NULL)
			return (NULL);
		while (s--)
			dup[s] = str[s];
		return (dup);
	}
	else
	{
		return (NULL);
	}
}
