/**
 * binary_to_uint - converts a binary string to a uint
 * @b: input string
 * Return: unsigned integer output
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		i |= (*b - '0');
		b++;
		if (*b)
			i <<= 1;
	}
	return (i);
}
