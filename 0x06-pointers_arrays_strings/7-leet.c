#include <ctype.h>
/**
 * leet - converts to leetspeak
 * @s: input string
 * Return: output string
 */
char *leet(char *s)
{
	int i, j;
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != 0; i++)
		for (j = 0; j < 5; j++)
			if (s[i] == letter[j] || s[i] == toupper(letter[j]))
				s[i] = num[j];
	return (s);
}
