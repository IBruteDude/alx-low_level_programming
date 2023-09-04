#include "main.h"

/**
 * factorial - calculate the factorial of a number recursively
 *
 * @n: input number
 * Return: the nth factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
