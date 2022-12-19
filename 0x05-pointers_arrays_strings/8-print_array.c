#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
		if (s != n - 1)
			printf("%d", a[s]);
		else
			printf("%d", a[s]);
	printf("\n");
}
