#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 * Return: Exit status
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int ld = n % 10;

	printf("Last digit of %d is %d and is ", n, ld);
	if (ld > 5)
		printf("is greater than 5\n");
	else if (ld == 0)
		printf("is zero\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}

