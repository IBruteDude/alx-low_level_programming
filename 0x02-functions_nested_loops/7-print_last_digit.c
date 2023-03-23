#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: input
 * Return: output 
 */
int print_last_digit(int n)
{
	int ld = ((n % 10) + 10) % 10;
	_putchar(ld);
	return (ld);
}
