#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates at most n chars from s2 to s1
 * @s1: main string
 * @s2: additional string
 * @n: number of chars to concatenate
 * Return: newly created string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char s1N = 0, s2N = 0, *str;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = '\0';
		s1N = 1;
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = '\0';
		s2N = 1;
	}
	str = malloc(sizeof(s1) + ((sizeof(s2) - 1 < n) ? sizeof(s2) - 1 : n));
	if (str == NULL)
		return (NULL);
	strcpy(str, s1);
	strncpy(str + strlen(s1), s2, n);
	str[sizeof(s1) + ((strlen(s2) < n) ? strlen(s2) : n) - 1] = '\0';
	if (s1N)
		free(s1);
	if (s2N)
		free(s2);
	return (str);
}
