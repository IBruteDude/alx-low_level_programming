#include "main.h"

/**
 * print_alphabet_x10 - print the alphabit in small case
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i++ < 10)
	{
		char c = 'a';

		for (; c <= 'z'; _putchar(c++))
			;
		_putchar('\n');
	}
}
