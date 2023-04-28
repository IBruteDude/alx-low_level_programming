#include "lists.h"

/**
 * print - prints a formatted string with an optional int and string
 * @format: formatting string
 * @n: input integer
 * @str: input string
 */
void print(const char *format, int n, char *str)
{
	int i, mask = 1000000000U;

	for (i = 0; format[i] != '\0'; i++)
		if (format[i] == '%')
		{
			switch (format[++i])
			{
			case 'd':
			{
				if (n != 0)
				{
					while (n / mask == 0)
						mask /= 10;
					while (mask != 0)
						_putchar('0' + n / mask), n %= mask, mask /= 10;
				}
				else
					_putchar('0');
				break;
			}
			case 's':
			{
				if (str)
					while (*(str))
						_putchar(*(str++));
			}
			}
		}
		else
		{
			_putchar(format[i]);
		}
}
/**
 * print_list - prints the elements of a list of nodes
 * @h: input list head
 * Return: number of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			print("[%d] %s\n", h->len, h->str);
		else
			print("[%d] %s\n", 0, "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
