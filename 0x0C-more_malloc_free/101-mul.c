#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 * multiply - precise implementation of the multiplication algorithm
 * @n1: 1st input number
 * @n2: 2nd input number
 * @res: result
 */
void multiply(char *n1, char *n2, char *res)
{
	int idx, s1 = strlen(n1), s2 = strlen(n2), a_i, b_i, carry;

	for (b_i = 1; b_i <= s2; b_i++)
	{
		carry = 0;
		for (a_i = 1; a_i <= s1; a_i++)
		{
			idx = s1 + s2 - (a_i + b_i - 1);
			res[idx] -= '0';

			res[idx] += carry +
				((n1[s1 - a_i] - '0') * (n2[s2 - b_i] - '0'));
			carry = res[idx] / 10;
			res[idx] %= 10;

			res[idx] += '0';
		}
		res[s2 - b_i] += carry;
	}
	while (res[0] == '0')
	{
		memcpy(res, res + 1, s1 + --s2);
		res[s1 + s2 - 1] = '\0';
	}
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
	res = malloc(s1 + s2);
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
	_putchar('\n'), free(res);
	return (0);
}
