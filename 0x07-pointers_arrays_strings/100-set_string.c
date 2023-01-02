#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to char
 * @s: The main string
 * @to: Pointer to memory
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
