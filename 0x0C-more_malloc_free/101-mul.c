#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * strip - removes 0 in the front of a number string
 * @s: input string
 * @si: string size
 */
void strip(char *s, int si)
{
	while (s[0] == '0' && si != 1)
	{
		memcpy(s, s + 1, --si);
		s[si - 1] = '\0';
	}
}

/**
 * multiply - precise implementation of the multiplication algorithm
 * @n1: 1st input number
 * @n2: 2nd input number
 * @res: result
 */
void multiply(char *n1, char *n2, char *res)
{
	int i, j, currpass = 0, nextpass = 0, s, s1 = strlen(n1), s2 = strlen(n2);

	s = s1 + s2;
	for (i = 0; i < s; i++)
	{
		currpass = nextpass;
		for (j = 0; j <= i; j++)
			if (j < s1 && (i - j) < s2)
				currpass += (n1[s1 - 1 - j] - '0') * (n2[s2 - 1 - (i - j)] - '0');
		nextpass = currpass / 10;
		res[s - 1 - i] += currpass % 10;
	}
	strip(res, s);
}

/**
 * main - accepts and checks user input for safety
 * @argc: number of arguments
 * @argv: arguments array
 * Return: exit status
 */
int main(int argc, char **argv)
{
	char failed = 0, *res, *n1, *n2;
	int i, s1, s2;

	if (argc != 3)
		printf("Error\n"), exit(98);
	n1 = argv[1];
	n2 = argv[2];
	for (i = 0; n1[i] != '\0'; i++)
		if (!isdigit(n1[i]))
			failed = 1;
	for (i = 0; n2[i] != '\0'; i++)
		if (!isdigit(n2[i]))
			failed = 1;

	s1 = strlen(n1), s2 = strlen(n2);
	strip(n1, s1);
	strip(n2, s2);
	res = (char *) malloc(s1 + s2);
	if (res == NULL)
		failed = 1;
	if (failed)
	{
		if (res != NULL)
			free(res);
		printf("Error\n");
		exit(98);
	}
	/* All safe */
	for (i = 0; i < s1 + s2; i++)
		res[i] = '0';

	/* All ready */
	multiply(n1, n2, res);
	i = s1 + s2;
	while (i--)
		_putchar(res[s1 + s2 - 1 - i]);
	_putchar('\n');
	free(res);
	return (0);
}
