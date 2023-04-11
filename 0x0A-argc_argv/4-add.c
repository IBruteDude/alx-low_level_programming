#include <stdio.h>
#include <stdlib.h>
/**
 * main - gets arguments to print multiplication of its arguments
 * @argc: argument count
 * @argv: argument values
 * Return: 0 successful exit status, or 1 error in argument count
 */
int main(int argc, char *argv[])
{
	int i, n = 0;
	char **fptr = malloc(sizeof(char *));

	for (i = 1; i < argc; ++i)
	{
		n += strtol(argv[i], fptr, 10);
		if (*fptr == argv[i])
		{
			printf("Error\n");
			free(fptr);
			return (1);
		}
	}
	printf("%i\n", n);
	free(fptr);
	return (0);
}
