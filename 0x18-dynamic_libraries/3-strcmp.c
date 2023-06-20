/**
 * _strcmp - compute a difference between two strings
 * @s1: first input string
 * @s2: second input string
 * Return: 0 if similar, non-zero otherwise
 */
int _strcmp(const char *s1, const char *s2)
{
	int diff;

	while (!(diff = *s1 - *s2) && (*s1 && *s2))
		s1++, s2++;
	return (diff);
}
