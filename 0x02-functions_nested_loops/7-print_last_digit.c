#include "main.h"

/**
 * print_last_digit - to print the last digit of a number
 * @p: the number in question
 *
 * Return: value of the last digit
 */

int print_last_digit(int p)
{
	int n;

	if (p < 10)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
