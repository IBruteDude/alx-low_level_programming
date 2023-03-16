#include "stdio.h"

/**
 * main - Entry point to project
 * Return: returns exit status
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\nSize of a float: %d byte(s)\n",
		sizeof(long long int),
		sizeof(float));
	return (0);
}
