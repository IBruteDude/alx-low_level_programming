#include <ctype.h>
/**
 * rot13 - rotates string chars
 * @s: input string
 * Return: rotated string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (('a' <= s[i] && s[i] < 'n') || ('A' <= s[i] && s[i] < 'N'))
			s[i] += 13;
		else if (isalpha(s[i]))
			s[i] -= 13;
	}
	return (s);
}
