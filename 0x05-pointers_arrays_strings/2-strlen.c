#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: the string to return length
 * Return: Always 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
