#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print all arguments according to format
 * @format: string specifying format of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list va;
	char c;

	va_start(va, format);
	if (format == NULL)
	{
		return;
	}
	while (format[i])
	{
		c = format[i++];
		if (i != 1 && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		switch (c)
		{
		case 'c':
			printf("%c", va_arg(va, int));
			break;
		case 'i':
			printf("%d", va_arg(va, int));
			break;
		case 'f':
			printf("%f", va_arg(va, double));
			break;
		case 's': {
			char x = 1, *s = va_arg(va, char *);

			while (x-- && s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		}
		}
	}
	va_end(va);
	putchar('\n');
}
