#include "stdio.h"

/**
 * main - Entry point to project
 * Return: returns exit status
 */
int main(void)
{
	char c;

	/* like a fucking chad */
	for (c = 'a'; c <= 'z'; putchar(c++))
		;
	putchar('\n');
	return (0);
}
