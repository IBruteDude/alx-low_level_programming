#include <stdbool.h>
/**
 * swap_int - swaps int
 * @a: 1st int
 * @b: 2nd int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
