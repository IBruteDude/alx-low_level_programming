#include <stdio.h>
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, size_c = size;

	while (size_c--)
		sum1 += *(a + (size_c * size) + size - 1 - size_c);
	size_c = size;
	while (size_c--)
		sum2 += *(a + (size_c * size) + size_c);
	printf("%i, %i\n", sum2, sum1);
}
