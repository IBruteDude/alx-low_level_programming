#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: input string
 * Return: duplicate string 
 */
char *_strdup(char *str)
{
	if (str != NULL)
	{
		int s = sizeof(str);
		char *dup = malloc(s);

		while (s--)
			dup[s] = str[s];
		return (dup);
	}
	else
	{
		return (NULL);
	}
}
