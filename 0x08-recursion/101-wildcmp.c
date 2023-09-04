#include "main.h"

int skip_to(char *s1, char **s2p, char c)
{
	printf("s1: %s\n", s1);
	printf("s2: %s\n", *s2p);
	getchar();
	if (*s1 == '\0' && **s2p != '\0')
		return (0);
	if (c == '\0')
	{
		if (**s2p == '*')
		{
			(*s2p)++;
			skip_to(s1, s2p, c);
		}
	}
	else
	{
		if (**s2p == c)
		{
			(*s2p)++;
			skip_to(s1, s2p, c);
		}
		skip_to(s1, s2p, *s1);
	}
	if (wildcmp(s1 + 1, *s2p) == 0)
		return (skip_to(s1 + 1, s2p, '\0'));
	return (1);
}

/**
 * wildcmp - compare two strings using wildcards
 *
 * @s1: the first input string
 * @s2: the second input string (with wildcards)
 * Return: 1 if the two strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	getchar();
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 != '*')
		return (0);
	return (skip_to(s1, &s2, '\0'));
}
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}
