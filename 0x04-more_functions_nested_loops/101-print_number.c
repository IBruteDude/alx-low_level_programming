#include "main.h"
/**
 * print_number - prints a formatted integer value
 * @n: input integer
 */
void print_number(int n)
{
	int i, nth_digit, no = 1, power = 10;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n >= power)
	{
		no++;
		power *= 10;
	}

	for (i = 0; i < no; i++)
	{
		power /= 10;
		nth_digit = n / power;
		_putchar(nth_digit % 10 + '0');
	}
}
