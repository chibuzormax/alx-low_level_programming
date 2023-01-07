#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: amount of bytes to be copied from memory area
 *
 * Return: A pointer to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
