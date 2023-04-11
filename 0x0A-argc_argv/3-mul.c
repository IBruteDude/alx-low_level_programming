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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
