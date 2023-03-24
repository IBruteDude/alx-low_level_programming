#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    print_number(INT_MIN);
    _putchar('\n');
    print_number(INT_MAX);
    _putchar('\n');
    printf("%i\n%i\n", INT_MIN, INT_MAX);
    return (0);
}
