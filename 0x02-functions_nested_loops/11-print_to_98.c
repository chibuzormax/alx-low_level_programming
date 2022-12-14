#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural nos. from n to 98
 * @n: Starting point
 */

void print_to_98(int n)
{
	if (n >= 0)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n, ", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
