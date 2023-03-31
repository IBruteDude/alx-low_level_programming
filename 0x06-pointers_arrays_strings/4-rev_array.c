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

/**
 * reverse_array - reverses array
 * @a: int array
 * @n: array length
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n + 1) / 2; ++i)
		swap(a + i, a + (n - 1) -i);
}
