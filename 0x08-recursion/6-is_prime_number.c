#include "main.h"

/**
 * helper_recursive - a helper function
 *
 * @n: the original number n
 * @counter: the counter for the check
 * Return: 1 if prime, 0 if not
 */
int helper_recursive(int n, int counter)
{
	if (n % counter == 0)
		return (0);
	if (counter > n)
		return (1);
	return (helper_recursive(n, counter + 2));
}

/**
 * is_prime_number - determine if a number is prime or not
 *
 * @n: input number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (helper_recursive(n, 3));
}
