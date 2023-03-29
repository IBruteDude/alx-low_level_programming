#include "main.h"
#include <string.h>
/**
 * puts_half - put second half of  string in stdout
 * @str: string NTCS
 */
void puts_half(char *str)
{
	int s = strlen(str);

	str = str + s - s / 2;
	while (*str != 0)
		_putchar(*(str++));
	_putchar('\n');
}
