#include "main.h"

/**
 * is_prime_number - Returns 1 if input integer is a prime number
 * @n: Input integer
 *
 * Return: 1 if prime number
 */

int is_prime_number(int n)
{
	if ((n % n == 0) && (n / n == 0))
	{
		return (1);
	}
	else
		return (0);
}
