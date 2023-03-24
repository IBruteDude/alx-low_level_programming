#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14
 */
void more_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i;
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
