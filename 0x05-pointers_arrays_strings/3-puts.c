#include "main.h"
/**
 * _puts - put string in stdout
 * @str: string NTCS
 */
void _puts(char *str)
{
	while (*str != 0)
		_putchar(*(str++));
	_putchar('\n');
}
