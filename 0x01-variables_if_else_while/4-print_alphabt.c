#include "stdio.h"

/**
 * main - Entry point to project
 * Return: returns exit status
 */
int main(void)
{
	/* like a fucking chad */
	for (char c = 'a'; c <= 'z'; putchar(c++))
		if (c == 'e' || c == 'q')
			c++;
	putchar('\n');
	return (0);
}
