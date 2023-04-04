/**
 * _strpbrk - find the first of s agreeing with accept
 * @s: input string
 * @accept: tested characters
 * Return: number of the first successful test
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j;

	while (*(s++) != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (*(s - 1) == accept[j])
			{
				break;
			}
		if (accept[j] != '\0')
			break;
	}
	if (*(s-1) == '\0')
		return ((void *) 0);
	return (s - 1);
}
