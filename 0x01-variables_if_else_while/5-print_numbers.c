#include "stdio.h"

/**
 * main - Entry point to project
 * Return: returns exit status
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; putchar(i++))
		;
	putchar('\n');
	return (0);
}
