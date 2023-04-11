#include <stdio.h>
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
	char *cat;

	if (s1 != NULL && s2 == NULL)
	{
		cat = malloc(strlen(s1) + 1);
		if (cat == NULL)
			return (NULL);
		strcpy(cat, s1);
	}
	if (s1 == NULL && s2 != NULL)
	{
		cat = malloc(strlen(s2) + 1);
		if (cat == NULL)
			return (NULL);
		strcpy(cat, s2);
	}
	if (s1 == NULL && s2 == NULL)
	{
		cat = malloc(1);
		if (cat == NULL)
			return (NULL);
		*cat = '\0';
	}
	if (s1 != NULL && s2 != NULL)
	{
		cat = malloc(strlen(s1) + strlen(s2) + 1);
		if (cat == NULL)
			return (NULL);
		strcpy(cat, s1);
		strcpy(cat + strlen(s1), s2);
	}
	return (cat);
}
