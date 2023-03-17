#include "stdio.h"

/**
 * main - Entry point to project
 * Return: returns exit status
 */
int main(void)
{
	for (char i = '0'; i <= '9'; putchar(i++))
		;
	for (char i = 'a'; i <= 'f'; putchar(i++))
		;
	putchar('\n');
	return (0);
}
