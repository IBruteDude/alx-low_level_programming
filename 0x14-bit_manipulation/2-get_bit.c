/**
 * get_bit - get the value of a bit in an integer
 * @n: input integer
 * @index: integer index
 * Return: binary value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!((1 << index) & n));
}
