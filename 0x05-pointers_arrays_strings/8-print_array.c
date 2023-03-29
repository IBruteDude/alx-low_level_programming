#include <stdio.h>
/**
 * print_array - prints the elements of an array
 * @a: input array
 * @n: number of array elements
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		printf("%i", a[0]);
		for (i = 1; i < n; i++)
			printf(", %i", a[i]);
		putchar('\n');
	}
}
