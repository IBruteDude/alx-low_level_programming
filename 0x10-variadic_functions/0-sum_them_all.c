#include <stdarg.h>
/**
 * sum_them_all - sums a variable number of integer arguments
 * @n: number of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	int sum = 0;

	va_start(va, n);
	for (i = 0; i < n; i++)
		sum += va_arg(va, int);
	va_end(va);
	return (sum);
}
