#include <ctype.h>
/**
 * rot13 - rotates string chars
 * @s: input string
 * Return: rotated string
 */
char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (isupper(s[i]))
			s[i] = ((s[i] - 'A') + 13) % 26 + 'A';
		for (j = 0; j < 1 && islower(s[i]); j++)
			s[i] = ((s[i] - 'a') + 13) % 26 + 'a';
	}
	return (s);
}
