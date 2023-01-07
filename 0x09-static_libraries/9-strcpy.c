#include "main.h"

/**
 * _strcpy - A function that copies a string from source to destination
 * @dest: destination
 * @src: source
 *
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
		l++;
	for (; x < l; x++)
		dest[x] = src[x];
	dest[l] = '\0';
	return (dest);
}
