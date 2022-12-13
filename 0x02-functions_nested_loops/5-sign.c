#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: checks for the sign of n
 * Return: 1 if +ve, 0 if 0 and -1 if -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
