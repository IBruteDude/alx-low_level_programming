#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * strtow - splits a string to words
 * @str: input string
 * Return: word string array; or NULL if failed
 */
char **strtow(char *str)
{
	int i = 0, n = 0;
	char *s = str, *word, **words = NULL;

	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		while (isspace(s[i]))
			i++;
		if (s[i])
			n++;
		while (s[i] && !isspace(s[i]))
			i++;
	}
	if (n != 0)
		words = malloc(sizeof(char *) * n + 1);
	if (words == NULL)
		return (NULL);
	n = 0;

	while (*(s))
	{
		i = 0;
		while (isspace(*s))
			s++;
		while (!isspace(*(s++)))
			i++;
		s -= i + 1;
		if (i > 0)
		{
			word = malloc(i + 1);
			if (word == NULL)
				return (NULL);
			strncpy(word, s, i);
			if (strcmp(word, ""))
			{
				words[n] = word;
				n++;
			}
		}
		s += i + 1;
	}
	words[n] = NULL;
	return (words);
}
