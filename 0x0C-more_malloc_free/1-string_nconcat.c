#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: Pointer to string 1
 * @s2: Pointer to string 2
 * @n: Bytes of the strings
 *
 * Return: Pointer to new string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *s;

	if (s1 == NULL)
		x = 0;
	else
		for (x = 0; s1[x]; x++)
			;
	if (s2 == NULL)
		y = 0;
	else
		for (y = 0; s2[y]; y++)
			;
	if (y < n)
		y = n;
	s = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		s[z] = s1[z];
	for (z = 0; z < y; z++)
		s[z + x] = s2[z];
	s[z + y] = '\0';
	return (s);
}
