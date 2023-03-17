#include <stdio.h>

/**
 * main - Entry code execution point
 * Description: Print comma separated different 1-digit combination
 * Return: Exit status
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				if (i != '0' || j != '1' || k != '2')
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i);
				putchar(j);
				putchar(k);
			}
		}
	}
	putchar('\n');
	return (0);
}
