/**
 * get_endianness - determine the endianness of the system
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	short int i = 1;

	return (*((char *)&i));
}
