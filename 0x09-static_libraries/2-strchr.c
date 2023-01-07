#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: The string to locate a character from
 * @c: The character to locate
 *
 * Return: NULL if character is not found or a pointer to character c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
