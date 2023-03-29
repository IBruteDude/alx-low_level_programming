/**
 * _strlen - measure the length of a string
 * @s: NTCS
 * Return: number of chars;
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s++) != 0)
		n++;
	return n;
}
