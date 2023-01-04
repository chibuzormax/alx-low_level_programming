#include "main.h"

/**
 * confirms - Confirms it number is prime
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */

int confirm(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (confirm(a + 1, b));
}

/**
 * is_prime_number - Returns 1 if input integer is a prime number
 * @n: Input integer
 *
 * Return: 1 if prime number
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (confirm(2, n));
}
