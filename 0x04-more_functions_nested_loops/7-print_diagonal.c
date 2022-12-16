#include "main.h"

/**
 * print_diagonal - prints a diagonal with '\'
 * @n: number of times to print the diagonal
 */

void print_diagonal(int n)
{
	while (n-- > 0)
	{
		_putchar('\\');
		_putchar('\n');
		_putchar(' ');
	}
	_putchar(' ');
	_putchar('\n');
}
