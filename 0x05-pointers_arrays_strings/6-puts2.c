#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character
 * @str: String to print
 */

void puts2(char *str)
{
	int strn;

	for (strn = 0; str[strn] != '\0'; strn++)
		if (strn % 2 == 0)
			_putchar(str[strn]);
	_putchar('\n');
}
