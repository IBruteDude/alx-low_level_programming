/**
 * set_bit - set the value of a bit in an integer to 1
 * @n: input integer
 * @index: integer index
 * Return: binary value of the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(n))
		return (-1);
	*n |= (1 << index);
	return (1);
}
