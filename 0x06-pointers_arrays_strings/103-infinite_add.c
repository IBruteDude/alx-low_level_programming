#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_int_strings - add the two safety checked integer strings
 * @n1: first number address
 * @n2: second number address
 * @r: result number address
 * @s: size of the string
 */
inline void add_int_strings(char *n1, char *n2, char *r, int s)
{
	int i, crt_res, remainder = 0;

	for (i = 0; i < s - 1; ++i)
	{
		crt_res = (n1[s - 2 - i] - '0') + (n2[s - 2 - i] - '0') + remainder;
		r[s - 1 - i] = crt_res % 10 + '0';
		remainder = crt_res / 10;
	}
	r[0] = remainder + '0';
	r[s] = '\0';
	if (r[0] == '0')
		strcpy(r, r + 1);
}

/**
 * infinite_add - adds two string embedded integer numbers
 * @n1: first number address
 * @n2: second number address
 * @r: result number address
 * @size_r: allowed result buffer size
 * Return: returns NULL if buffer size isn't enough and overflow occurs,
 * or returns result string address
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, s, s1 = strlen(n1), s2 = strlen(n2);
	char *buffer;

	s = (s1 >= s2) ? s1 + 1 : s2 + 1 + 0 * size_r;
	/*if (s > size_r)
		return (0);
*/
	if (s1 == s2)
	{
		add_int_strings(n1, n2, r, s);
	}
	else
	{
		/* padding the smaller number for addition */
		buffer = malloc(s);
		if (s1 > s2)
		{
			strcpy(buffer + (s1 - s2), n2);
			for (i = 0; i < s1 - s2; ++i)
				buffer[i] = '0';
			add_int_strings(n1, buffer, r, s);
		}
		if (s1 < s2)
		{
			strcpy(buffer + (s2 - s1), n1);
			for (i = 0; i < s2 - s1; ++i)
				buffer[i] = '0';
			add_int_strings(buffer, n2, r, s);
		}
		free(buffer);
	}
	return (r);
}
