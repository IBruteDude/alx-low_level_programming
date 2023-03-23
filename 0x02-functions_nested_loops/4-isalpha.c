#include "main.h"

/**
 *  _isalpha - Entry point to code
 * @c: the input character
 * Return: 1 if c is alphabetic, 0 if not
 */
int _isalpha(int c)
{
	return (('A' <= c && 'Z' <= c) || ('a' <= c && c <= 'z'));
}
