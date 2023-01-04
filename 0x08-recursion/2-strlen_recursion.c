#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Pointer variable to the string
 *
 * Return: Length of string 'i'
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
