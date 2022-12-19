#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination
 * @src: source
 * Return: 0 always
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
