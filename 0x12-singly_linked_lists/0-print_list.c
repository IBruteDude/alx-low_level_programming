#include "lists.h"

/**
 * _puts - print a simple string
 * @s: input string
 * Return: number of written chars;
 */
int _puts(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		_putchar(s[i++]);

	return (i);
}

int print_int(int n)
{
	while (n > 0)
	{
		_putchar('0' + n % 10);
		n /= 10;
	}
}

int format(const char *fmt, char *s, int *n)
{
	size_t i = 0;

	while (fmt[i] != '%' && fmt[i] != '\0')
		_putchar(fmt[i++]);
	if (fmt[i] == '%')
	{
		if (fmt[++i] == 'i');

	}
}

size_t print_list(const list_t *h)
{
	size_t i;

	while (h != NULL)
	{
		if (h->str != NULL)
			_puts(h->str);
		else
			
	}

}
