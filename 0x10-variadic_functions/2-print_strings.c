#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints string arguments
 * @separator: separating string between succesive values
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;
	char *s;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		s = va_arg(va, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
	}
	va_end(va);
	putchar('\n');
}
