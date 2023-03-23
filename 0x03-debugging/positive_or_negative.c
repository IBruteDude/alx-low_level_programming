#include <stdio.h>

/**
 * positive_or_negative - Entry point to code
 * @n: input
 * Description: print the sign of n check for sign
 */
void positive_or_negative(int n)
{
	if (n == 0)
		printf("0 is zero\n");
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
}

