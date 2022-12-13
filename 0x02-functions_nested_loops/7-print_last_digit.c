#include "main.h"

/**
 * print_last_digit - to print the last digit of a number
 * @p: the number in question
 *
 * Return: value of the last digit
 */

int print_last_digit(int p)
{
	int ld = p % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}
