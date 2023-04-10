#include <stdio.h>
/**
 * main - gets arguments to print the name of the program
 * @argc: argument count
 * @argv: argument values
 * Return: 0 successful exit status
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
