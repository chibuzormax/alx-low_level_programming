#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of _ to be printed
 */

void print_line(int n)
{
	if (n-- > 0)
		_putchar('_');
	else if (n >= 0)
		_putchar('\n');
	else
		_putchar('_');
	_putchar('\n');
}
