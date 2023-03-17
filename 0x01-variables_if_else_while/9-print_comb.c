#include <stdio.h>

/**
 * main - Entry code execution point
 * Description: Print comma separated different 1-digit combination
 * Return: Exit status
 */

int main(void)
{
	for (int i = '0';; i++)
	{
		putchar(i);
		if (i <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			break;
		}
	}
	return (0);
}
