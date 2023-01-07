#include "main.h"

/**
 * _memset - A function that fills a memory with a constantbyte
 * @s: Pointer to memory address
 * @n: The number of bytes of the memory area pointed to by s
 * @b: The constant byte
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
