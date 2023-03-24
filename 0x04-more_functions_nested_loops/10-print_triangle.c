#include "main.h"
/**
 * print_triangle - prints a triangle of hashtags
 * @size: triangle base length
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(j < (size - i - 1) ? ' ' : '#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
