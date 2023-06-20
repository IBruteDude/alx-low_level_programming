#include "main.h"

/**
 *  _islower - Entry point to code
 * @c: the input character
 * Return: 1 if c is lower case, 0 if not
 */
int _islower(int c)
{
	return ('a' <= c && c <= 'z');
}
