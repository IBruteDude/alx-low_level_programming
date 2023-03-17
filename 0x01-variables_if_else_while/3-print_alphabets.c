#include "stdio.h"

/**
 * main - Entry point to project
 * Return: returns exit status
 */
int main(void)
{
	/* like a fucking chad */
	char c;

	for (c = 'a'; c <= 'z'; putchar(c++))
		;
	/* and again LOL */
	for (c = 'A'; c <= 'Z'; putchar(c++))
		;
	putchar('\n');
	return (0);
}
