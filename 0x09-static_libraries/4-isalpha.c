#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: checks for alphabet c
 * Return: 1 if c is a letter and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
