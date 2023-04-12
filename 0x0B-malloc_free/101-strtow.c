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
	int i, n = 0;
	char *s = str, *word, **words = calloc(sizeof(char *) * (strlen(str) / 2), sizeof(char *));
	
	if (words == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(words);
		return (NULL);
	}
	while (*(s))
	{
		i = 0;
		while(isspace(*s))
			s++;
		while(!isspace(*(s++)))
			i++;
		s -= i + 1;
		word = malloc(i + 1);
		strncpy(word, s, i);
		s += i + 1;
		words[n] = word;
		n++;
	}
	if (n == 0)
		return (NULL);
	words = realloc(words, sizeof(char *) * n);
	return (words);
}
