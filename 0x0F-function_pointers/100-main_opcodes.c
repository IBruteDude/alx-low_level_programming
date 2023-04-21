#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - a function that prints its assembly content
 * @argc: number of arguments
 * @argv: arguments
 * Return: exit status
 */
int main(int argc, char **argv)
{
	char *p = (char *) &main;
	int i = 0, n;

	if (argc != 2)
		printf("Error\n"), exit(1);
	if (argv[1][0] == '-')
		printf("Error\n"), exit(2);
	n = atoi(argv[1]);
	printf("%2.2x", (p[i] >= 0) ? p[i++] : (256 + p[i++]) % 256);
	while (i < n)
		printf(" %2.2x", (p[i] >= 0) ? p[i++] : (256 + p[i++]) % 256);
	putchar('\n');
	return (0);
}
