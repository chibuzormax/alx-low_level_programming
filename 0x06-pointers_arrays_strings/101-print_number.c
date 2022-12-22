#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 */

void print_number(int n)
{
	unsigned int num;

	if (num < 0)
		_putchar('-');
	n *= -1;

	num = n;

	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
