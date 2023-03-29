#include "main.h"
/**
 * puts2 - put stripped string in stdout
 * @str: string NTCS
 */
void puts2(char *str)
{
	/* isn't memory unsafe - won't check one slot out of bound if the and short-circuits first checking */
	while (*str != 0 && *(str + 1) != 0)
	{
		_putchar(*(str));
		str += 2;
	}
	_putchar('\n');
}
