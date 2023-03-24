#include "main.h"
/**
 * print_line - prints a line of n length
 * @n: number of underscores
 */
void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
