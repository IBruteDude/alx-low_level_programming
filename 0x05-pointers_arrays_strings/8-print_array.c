#include <stdio.h>
/**
 * print_array - prints the elements of an array
 * @a: input array
 * @n: number of array elements
 */
void print_array(int *a, int n)
{
	int i = 1;

	printf("%i", a[0]);
	for (; i < n; i++)
		printf(", %i", a[i]);
}
