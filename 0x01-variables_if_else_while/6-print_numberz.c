#include "stdio.h"

/**
 * main - Entry point to project
 * Return: returns exit status
 */
int main(void)
{
	int i;

	for (i = (int) '0'; i <= (int) '9'; putchar(i++))
		;
	putchar('\n');
	return (0);
}
