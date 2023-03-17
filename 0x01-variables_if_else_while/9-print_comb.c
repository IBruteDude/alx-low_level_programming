#include <stdio.h>

/**
 * main - Entry code execution point
 * Description: Print comma separated different 1-digit combination
 * Return: Exit status
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
