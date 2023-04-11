#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: seconde string
 * Return: concatenated string if successful, NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	int s = strlen(s1);
	char *cat = malloc(s + strlen(s2) + 1);

	if (s1 != NULL && s2 == NULL)
		return (s1);
	if (s2 != NULL && s1 == NULL)
		return (s2);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (cat == NULL)
		return (NULL);
	strcpy(cat, s1);
	strcpy(cat + s, s2);
	return (cat);
}
