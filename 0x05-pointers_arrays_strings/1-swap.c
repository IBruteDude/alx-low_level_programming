/*
 * swap_int - swaps int
 * @a: 1st int
 * @b: 2nd int
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
