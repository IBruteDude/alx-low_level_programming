#include "main.h"
/**
 * print_binary - prints a binary integer
 * @n: input integer
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(n) * 8UL) - 1UL);

	while (!(n & mask) && mask)
		mask >>= 1;
	while (mask)
		_putchar('0' + !!(n & mask)), mask >>= 1;
	if (n == 0)
		_putchar('0');
}
