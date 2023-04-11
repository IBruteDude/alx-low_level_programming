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
	int i, n = atoi(argv[1]), change = 0, curr[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		if (n <= 0)
		{
			printf("0\n");
			return (0);
		}
		for (i = 0; i < 5; ++i)
		{
			if (n >= curr[i])
			{
				change += n / curr[i];
				n = n % curr[i];
				if (n % curr[i] == 0)
					break;
			}
		}

		printf("%d\n", change);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
