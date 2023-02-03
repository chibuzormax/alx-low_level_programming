#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: The number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res = 1;
	unsigned int i, j = 0;

	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (res == (diff & res))
			j++;
		res <<= 1;
	}
	return (j);
}
