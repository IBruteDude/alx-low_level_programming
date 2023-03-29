#include <stdbool.h>
/**
 * swap_int - swaps int
 * @a: 1st int
 * @b: 2nd int
 */
void swap_int(int *a, int *b)
{
	bool a_sign = (*a < 0), b_sign = (*b < 0);

	if (*a >= *b)
	{
		*a -= *b;
		*b += *a;
		*a -= *b;
	}
	else
	{
		*b -= *a;
		*a += *b;
		*b -= *a;
	}

	if (a_sign && (*b >= 0))
		*b = -(*b);
	if (b_sign && (*a >= 0))
		*a = -(*a);
}
