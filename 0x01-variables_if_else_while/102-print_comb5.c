#include <stdio.h>

/**
 * main - Entry code execution point
 * Description: Print comma separated different 2by2-digit combination
 * Return: Exit status
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			if (!(i == 0 && j == 1))
			{
				putchar(',');
				putchar(' ');
			}
			putchar('0' + (i - (i % 10)) / 10);
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j - (j % 10)) / 10);
			putchar('0' + (j % 10));
		}
	}
	putchar('\n');
	return (0);
}
