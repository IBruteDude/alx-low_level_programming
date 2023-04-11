#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - gets arguments to print multiplication of its arguments
 * @argc: argument count
 * @argv: argument values
 * Return: 0 successful exit status, or 1 error in argument count
 */
int main(int argc, char *argv[])
{
	int i, j, s, n = 0;
	/* char **fptr = malloc(sizeof(char *)); */

	for (i = 1; i < argc; ++i)
	{
		s = strlen(argv[i]);
		for (j = 0; j < s; j++)
			if (argv[i][j] < '0'  || '9' < argv[i][j])
			{
				printf("Error\n");
				return (1);
			}

		n += atoi(argv[i]) /* strtol(argv[i], fptr, 10) */;
		/**
		 *if (*fptr == argv[i])
		 *{
		 *	printf("Error\n");
		 *	free(fptr);
		 *	return (1);
		 *}
		 */
	}
	printf("%i\n", n);
	/* free(fptr); */
	return (0);
}
