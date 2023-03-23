#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: the integer argument
 * Return: 1 if positive, -1 if negative, 0 if equal zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return 0;
	}
	else
	{
		if (n > 0)
		{
			_putchar('+');
			return 1;
		}
		else
		{
			_putchar('-');
			return -1;
		}
	}
}
