#include "main.h"

/**
 * _print_rev_recursion - prints a string recursively in reverse
 *
 * @s: input string
 */
void _print_rev_recursion(char *s)
{
	if (s != NULL)
	{
		if (*(s + 1) != '\0')
			_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
