int get_endianness(void)
{
	short int i = 1;

	return (*((char *)&i));
}
