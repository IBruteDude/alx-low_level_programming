#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 for success
 */
int main(void)
{
	long int num = 612852475143, comp = 3;
	while (1)
	{
		while (!(num % comp))
			num /= comp;
		if (num == 1) break;
		comp += 2;
	}
	printf("%lu\n", comp);
	return (0);
}
