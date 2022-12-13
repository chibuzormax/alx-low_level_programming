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
	int last_digit = p % 10;

	if (p < 10)
		n = -1 * last_digit;
	else
		n = last_digit;

	_putchar(last_digit + '0');
	return (last_digit);
}
