#include "main.h"
#include <limits.h>
/**
 * print_number - prints a formatted integer value
 * @n: input integer
 */
void print_number(int n)
{
	int i, nth_digit, no = 1, power = 1, min = (n == INT_MIN);
	if (n < 0)
	{
		_putchar('-');
		n = (min) ? -(n + 1) : -n;
	}

	while (n >= power * 10 && power != 1000000000)
	{
		no++;
		power *= 10;
	}

	for (i = 0; i < no - 1; i++)
	{
		nth_digit = n / power;
		_putchar(nth_digit % 10 + '0');
		power /= 10;
	}
	_putchar((min) ? '8' : ((n / power) % 10 + '0'));
}
