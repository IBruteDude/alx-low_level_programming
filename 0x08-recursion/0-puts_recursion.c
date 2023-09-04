#include "main.h"

/**
 * _puts_recursion - print a string recursively
 *
 * @s: input string
 */
void _puts_recursion(char *s)
{
	if (s != NULL && *s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
