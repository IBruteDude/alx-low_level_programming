#include <stdio.h>

/**
 * main - Entry code execution point
 * Description: Print comma separated different 1-digit combination
 * Return: Exit status
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			if (i != '0' || j != '1')
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i);
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
