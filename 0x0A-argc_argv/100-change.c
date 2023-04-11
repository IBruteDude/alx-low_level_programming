#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - finds minimum coins for a change
 * @argc: arguments count
 * @argv: arguments values
 * Return: 0 if correct argument, 1 if not
 */

int main(int argc, char *argv[])
{
	int i, s, n = atoi(argv[1]), change = 0, curr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	s = strlen(argv[1]);
	for (i = 0; i < s; ++i)
		if (!(argv[1][0] == '-') && (argv[1][i] < '0' || '9' < argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}


	if (n <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; ++i)
	{
		change += n / curr[i];
		n = n % curr[i];
	}

	printf("%i\n", change);
	return (0);
}
