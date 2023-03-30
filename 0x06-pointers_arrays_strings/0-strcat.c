#include <string.h>
char *_strcat(char *dest, char *src)
{
	int i, dsize = strlen(dest), ssize = strlen(src);

	for (i = 0; i <= ssize; ++i)
		dest[dsize + i] = src[i];
	return dest;
}
