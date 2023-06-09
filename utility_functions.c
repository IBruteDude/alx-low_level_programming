#include <unistd.h>
#include <stdlib.h>

/**
 * strip - strips a string from leading zeros
 * @str: input string
 */
void strip(char *str)
{
	if (str)
		while (str[0] == '0' && _strlen(str) > 1)
			strcpy(str, str + 1);
}
/**
 * strlen - find the length of a string
 * @str: input string
 * Return: length of the string
 */
size_t strlen(const char *str)
{
	size_t i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * strcpy - copys a string
 * @dest: destination address
 * @src: soure address
 * Return: copied destination address
 */
char *strcpy(char *dest, const char *src)
{
	size_t i = 0;

	while (src[i] != '\0')
		dest[i] = src[i], i++;
	dest[i] = '\0';
	return (dest);
}
/**
 * strchr - find the address of a char inside a string
 * @str: input string
 * @c: specified char
 * Return: address of the found char, or NULL if not found
 */
char *strchr(const char *str, int c)
{
	size_t i = 0;

	while (str[i] != '\0')
		if (str[i++] == c)
			return ((char *)(str + i - 1));
	return (NULL);
}
/**
 * chrpos - find the relative position of a char inside a string
 * @str: input string
 * @c: specified char
 * @start: starting position for searching
 * Return: relative position of char if found, -1 if not found
 */
int chrpos(const char *str, char c, int start)
{
	int i, idx = 0;

	if (start >= 0 && str != NULL && start <= (int) sizeof(str) - 1)
		for (i = start; str[i] != '\0'; i++)
		{
			if (str[i] == c)
				return (idx);
			idx++;
		}
	return (-1);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
/**
 * _puts - prints a string to standard output
 * @str: input string
 */
void _puts(const char *str)
{
	if (str)
		while (*(str))
			_putchar(*(str++));
}
/**
 * _puti - prints an integer to standard output
 * @n: input integer
 */
void _puti(int n)
{
	int mask = 1000000000U;
	if (n != 0)
	{
		while (n / mask == 0)
			mask /= 10;
		while (mask != 0)
			_putchar('0' + n / mask), n %= mask, mask /= 10;
	}
	else
	{
		_putchar('0');
	}
}
/**
 * print - prints a formatted string with an optional int and string
 * @format: formatting string
 * @n: input integer
 * @str: input string
 */
void print(const char *format, int n, char *str)
{
	int i;

	for (i = 0; format[i] != '\0'; i++)
		if (format[i] == '%')
			switch (format[++i])
			{
			case 'd':
				_puti(n);
				break;
			case 's':
				_puts(str);
				break;
			}
		else
			_putchar(format[i]);
}
