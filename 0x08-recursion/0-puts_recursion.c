#include "main.h"

/**
 * _puts_recursion - A function that prints a string followed by a new line
 * @s: The string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	else
		_putchar('\n');
}
