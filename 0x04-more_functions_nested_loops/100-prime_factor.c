#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 for success
 */
int main(void)
{
	long int num = 612852475143, comp = 3;
	while (num != 1)
	{
		while (!(num % comp))
			num /= comp;
		comp += 2;
	}
	printf("%lu\n", 612852475143 % comp);
	return (0);
}
