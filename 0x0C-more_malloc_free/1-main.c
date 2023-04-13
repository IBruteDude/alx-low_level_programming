#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;
	long unsigned int i = 0;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    while(i < 13)
	    printf("%i\n", concat[i++]);
    free(concat);
    return (0);
}
