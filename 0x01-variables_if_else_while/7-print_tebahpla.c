#include "stdio.h"

/**
 * main - Entry point to project
 * Return: returns exit status
 */
int main(void)
{
	/* like a fucking chad */
	char c;

	for (c = 'z'; c >= 'a'; putchar(c--))
		;
	putchar('\n');
	return (0);
}
