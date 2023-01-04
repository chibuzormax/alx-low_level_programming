#include "main.h"

/**
 * confirm - confirms if a number has a square root
 * @a: first integer
 * @b: Second integer
 *
 * Return: Success
 */

int confirm(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (confirm(a + 1, b));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: integer to calculate the square root
 *
 * Return: Square root of 'n'
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (confirm(1, n));
}
