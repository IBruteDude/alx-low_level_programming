/**
 * _strcpy - copys a string
 * @dest: destination address
 * @src: soure address
 * Return: copied destination address
 */
char *_strcpy(char *dest, char *src)
{
	char *store = dest;

	while (*src != 0)
		*(dest++) = *(src++);
	*dest = 0;
	return (store);
}
