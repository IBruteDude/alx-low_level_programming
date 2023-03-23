#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: input
 * Return: output 
 */
int print_last_digit(int n)
{
	int ld = (n > 0) ? n % 10  : -(n % 10);
	_putchar('0' + ld);
	return (ld);
}
