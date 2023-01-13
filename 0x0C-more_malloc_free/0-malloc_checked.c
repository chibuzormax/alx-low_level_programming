#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: memory variable
 *
 * Return: A pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
