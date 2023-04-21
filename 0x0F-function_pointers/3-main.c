#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - evaluate a calculation of arguments
 * @argc: number of arguments
 * @argv: arguments array
 * Return: exit status
 */
int main(int argc, char **argv)
{
	int a, b, (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]), b = atoi(argv[3]);
	printf("%d\n", f(a, b));
	return (0);
}
