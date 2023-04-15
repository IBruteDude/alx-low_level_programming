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
	char *str;
	unsigned int min = (strlen(s2) < n) ? strlen(s2) : n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc(strlen(s1) + min + 1);
	if (str == NULL)
		return (NULL);
	strcpy(str, s1);
	strncpy(str + strlen(s1), s2, n);
	str[strlen(s1) + min] = '\0';
	return (str);
}
