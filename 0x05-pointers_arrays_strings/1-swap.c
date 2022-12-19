#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: Value of first integer
 * @b: Value of second integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
