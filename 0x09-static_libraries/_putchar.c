#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to the stout
 * @c: the character to print
 *
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}