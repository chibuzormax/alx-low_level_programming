#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: string to append to src
 * @src: string to be appended with dest
 * Return: s
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
