#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - concatenates two strings
 * @ac: number of arguments
 * @av: arguments array
 * Return: concatenated string if successful, NULL if failed
 */
char *argstostr(int ac, char **av)
{
	char *cat;
	int i, total_length = 0;

	for (i = 0; i < ac; ++i)
		total_length += strlen(av[i]) + 1;
	cat = malloc(total_length + 1);
	if (cat == NULL || av == NULL || ac <= 0)
		return (NULL);
	total_length = 0;
	for (i = 0; i < ac; ++i)
	{
		strcpy(cat + total_length, av[i]);
		total_length += strlen(av[i]) + 1;
		cat[total_length - 1] = '\n';
	}
	cat[total_length] = '\0';
	return (cat);
}
