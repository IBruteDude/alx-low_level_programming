#include <string.h>

void swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
void rev_string(char *s)
{
	int i, size = strlen(s);

	for (i = 0; i < (size + 1) / 2; i++)
	{
		swap((s + i), (s + size - 1 - i));
	}
}
