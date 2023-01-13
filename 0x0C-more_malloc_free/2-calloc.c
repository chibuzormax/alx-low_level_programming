#include "main.h"

/**
 * _calloc - Allocates memory for an array of 'nmemb' elements of
 * 'size' bytes each and returns a pointer to the allocated memory
 * @nmemb: allocates memory for array
 * @size: allocates element of size bytes
 *
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (t = 0; t < (nmemb * size); t++)
		s[t] = 0;
	return (s);
}
