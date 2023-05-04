/**
 * clear_bit - set a bit in an integer to 0
 * @n: input integer address
 * @index: index of the bit
 * Return: exit status
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(n))
		return (-1);
	*n &= (~0UL ^ (1 << index));
	return (1);
}
