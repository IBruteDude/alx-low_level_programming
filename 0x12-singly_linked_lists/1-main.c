#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"




/**
 * _puts - print a simple string
 * @s: input string
 * Return: number of written chars;
 */
int _puts(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		_putchar(s[i++]);

	return (i);
}

void int_print(int n)
{
	if (n < 0)
		_putchar('-'), n = -n;
	while (n > 0)
	{
		_putchar('0' + n % 10);
		n /= 10;
	}
}

int format(const char *fmt, char *s, int *n)
{
	size_t i = 0;

	while (fmt[i] != '%' && fmt[i] != '\0')
		_putchar(fmt[i++]);
	if (fmt[i] == '%')
	{
		if (fmt[++i] == 'i');

	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %u elements\n", n);
    free(new->str);
    free(new);
    return (0);
}