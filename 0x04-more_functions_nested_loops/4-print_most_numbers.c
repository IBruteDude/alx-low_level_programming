#include "main.h"
/**
 * print_most_numbers - prints the ten digits except 2 and 4
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; _putchar(c++))
		if (c == '2' || c == '4')
			c++;
	_putchar('\n');
}
