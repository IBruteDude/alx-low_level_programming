#include "main.h"

/**
 * helper_recursive - a sqrt helper function
 *
 * @n: the original number n
 * @x_n: the guess for the sqrt
 * Return: the result if found, -1 if not
 */
int helper_recursive(int n, int x_n)
{
	if (n == x_n * x_n)
		return (x_n);
	if (n < x_n * x_n)
		return (-1);
	return (helper_recursive(n, x_n + 1));
}

/**
 * _sqrt_recursion - calculate the square root of a number recursively
 *
 * @n: input number
 * Return: the square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (n);
	return (helper_recursive(n, 2));
}

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(16);
	printf("%d\n", r);
	r = _sqrt_recursion(17);
	printf("%d\n", r);
	r = _sqrt_recursion(25);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);
	return (0);
}
