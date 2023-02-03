#include "main.h"

/**
 * get_endianness - Checks for endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *c;

	c = (char *)&i;
	return (*c);
}
