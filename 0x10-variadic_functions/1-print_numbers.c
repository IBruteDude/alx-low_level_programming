#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints integer arguments
 * @separator: separating string between succesive values
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	va_start(va, n);
	printf("%d", va_arg(va, int));
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(va, int));
	}
	va_end(va);
	putchar('\n');
}
