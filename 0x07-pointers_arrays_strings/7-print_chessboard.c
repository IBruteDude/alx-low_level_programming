#include <stdio.h>
/**
 * print_chessboard - prints a chessboard matrix
 * @a: input matrix
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
		for (j = 0; j <= 8; j++)
			putchar((j != 8) ? (a[i][j]) : '\n');
}
