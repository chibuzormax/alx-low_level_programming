#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: The main string
 * @accept: substring to check from @s
 * Return: Number of bytes in the initial segment of @s
 * which consist only of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b, c;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] != 32)
		{
			for (c = 0; accept[c] != '\0'; c++)
			{
				if (s[b] == accept[c])
					a++;
			}
		}
		else
			return (a);
	}
	return (a);
}
