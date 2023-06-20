/**
 * _strspn - find the number of bytes of s agreeing with accept
 * @s: input string
 * @accept: tested characters
 * Return: number of consecutive successful tests
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		if (accept[j] == '\0')
			break;
	}
	return (n);
}
