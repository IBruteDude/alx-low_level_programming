#include "main.h"
/**
 * puts2 - put stripped string in stdout
 * @str: string NTCS
 */
void puts2(char *str)
{
	/* isn't memory unsafe
	 * won't check one slot out of bound as && short-circuits first checking */
	while (*str != 0 && *(str + 1) != 0)
	{
		_putchar(*(str));
		str += 2;
	}
	if (*str != 0)
		_putchar(*(str));
	_putchar('\n');
}
