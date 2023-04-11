#include <stdio.h>
/**
 * main - gets arguments to print its arguments
 * @argc: argument count
 * @argv: argument values
 * Return: 0 successful exit status
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
