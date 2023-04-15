#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 * multiply - my scuffed f****** implementation of the algorithm
 * @n1: 1st input number
 * @n2: 2nd input number
 * @res: result
 */
void multiply(char *n1, char *n2, char *res)
{
	int idx, s1 = strlen(n1), s2 = strlen(n2), x, y, prod, carry;

	idx = s1 + s2 - 1;
	carry = 0;
	for (x = 0; x < s1; x++)
	{
		for (y = 0; y < s2; y++)
		{
			idx = s1 + s2 - (x + y) - 1;
			prod = (n1[s1 - x - 1] - '0') * (n2[s2 - y - 1] - '0');
			res[idx] += (prod % 10 + carry % 10);
			if (res[idx] > '9')
			{
				res[idx] -= '0';
				carry += res[idx] - ((res[idx]) % 10);
				res[idx] = res[idx] % 10 + '0';
			}
			carry = (prod + carry) / 10;
			printf("p: %i - c: %i - n: %i\n", prod, carry, res[idx] - '0');
		}
	}
	res[0] += carry;
	if (res[0] == '0')
		memcpy(res, res + 1, s1 + s2);
}
/**
 * multiply2 - precise implementation of the multiplication algorithm
 * @n1: 1st input number
 * @n2: 2nd input number
 * @res: result
 */
void multiply2(char *n1, char *n2, char *res)
{
	int *a, *b, *product, s1 = strlen(n1), s2 = strlen(n2), a_i, b_i, carry;

	a = malloc(sizeof(int) * (s1 + 1)), b = malloc(sizeof(int) * (s2 + 1));
	product = calloc(s1 + s2 + 1, sizeof(int));

	if (product == NULL || a == NULL || b == NULL)
	{
		if (product != NULL)
			free(product);
		if (a != NULL)
			free(a);
		if (b != NULL)
			free(b);
		exit(98);
	}

	for (a_i = 1; a_i <= s1; a_i++)
		a[a_i] = n1[s1 - a_i] - '0';
	for (b_i = 1; b_i <= s2; b_i++)
		b[b_i] = n2[s2 - b_i] - '0';

	for (b_i = 1; b_i <= s2; b_i++)
	{
		carry = 0;
		for (a_i = 1; a_i <= s1; a_i++)
		{
			product[a_i + b_i - 1] += carry + (a[a_i] * b[b_i]);
			carry = product[a_i + b_i - 1] / 10;
			product[a_i + b_i - 1] %= 10;
		}
		product[b_i + s1] = carry;
	}

	for (a_i = 0; a_i < s1 + s2; a_i++)
		res[a_i] = product[s1 + s2 - a_i] + '0';
	free(product);
	free(a);
	free(b);
	if (res[0] == '0')
		memcpy(res, res + 1, s1 + s2);
}

/**
 * main - accepts and checks user input for safety
 * @argc: number of arguments
 * @argv: arguments array
 * Return: exit status
 */
int main(int argc, char *argv[])
{
	char failed = 0, *res, *n1, *n2;
	int i, s1, s2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = argv[1];
	n2 = argv[2];
	for (i = 0; n1[i] != '\0'; i++)
		if (!isdigit(n1[i]))
		{
			failed = 1;
		}
	for (i = 0; n2[i] != '\0'; i++)
		if (!isdigit(n2[i]))
			failed = 1;
	s1 = strlen(n1), s2 = strlen(n2);
	res = malloc(s1 + s2 + 1);
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
	res[s1 + s2] = '\0';

	/* All ready */
	multiply2(n1, n2, res);
	printf("%s\n", res);
	free(res);
	return (0);
}
