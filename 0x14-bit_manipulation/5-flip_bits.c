/**
 * flip_bits - find the number of bits to flip for integers to match
 * @n: first integer
 * @m: second integer
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;
	for (i = 0; i < sizeof(n) * 8; i++)
		count += !!((1 << i) & (n ^ m));
	return (count);
}