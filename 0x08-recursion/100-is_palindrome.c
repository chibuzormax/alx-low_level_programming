#include "main.h"

/**
 * _strlen_recursion - Detrermines the length of a string
 * @s: the string to determine its length
 *
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * palindrome_checker - Confirms if 's' is a palindrome
 * @s: Main string memory address
 * @r: Right index
 * @l: Left index
 *
 * Return: 1 if 's' is a palindrome
 */

int palindrome_checker(char *s, int l, int r)
{
	if (s[l] == s[r])
	{
		if (l > r / 2)
			return (1);
		else
			return (palindrome_checker(s, l + r, r - 1));
	}
	else
		return (0);
}

/**
 * is_palindrome - Checks if 's' is a palindrome
 * @s: Base address for string
 *
 * Return: 1 if 's' is palindrome
 */

int is_palindrome(char *s)
{
	return (palindrome_checker(s, 0, _srtrlen_recursion(s) - 1));
}
