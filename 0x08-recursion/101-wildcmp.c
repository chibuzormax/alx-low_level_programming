#include "main.h"

/**
 * str_checker - Checks if two strings are identical
 * @s1: Base address of first string
 * @s2: Base address of second string
 * @i: Left index
 * @j: Right index
 *
 * Return: 0 Success
 */

int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - Checks if strings can be said to be identical
 * @s1: Base address for string 1
 * @s2: Base address for string 2
 *
 * Return: 1 if they are considered identical
 */

int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
