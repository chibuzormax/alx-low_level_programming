#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of _ to be printed
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
