#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string reversed
 * @s: input string
 */
void print_rev(char *s)
{
	int i, size = strlen(s);

	for (i = size; i > 0; --i)
		_putchar(*(s + i - 1));
	_putchar('\n');

}
