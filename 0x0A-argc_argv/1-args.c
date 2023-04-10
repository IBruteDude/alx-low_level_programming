#include <stdio.h>
/**
 * main - gets arguments to print the number of arguments
 * @argc: argument count
 * @argv: argument values
 * Return: 0 successful exit status
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
