#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String to work on
 */

void puts_half(char *str)
{
	int strn = 0, n;

	while (str[strn] != '\0'; strn++)
		strn++;
	if (strn + 1 % 2 != '0')
		n = (strn - 1) / 2;
	else
		n = (strn / 2);
	n++;
	for (strn = n; str[strn] != '\0'; strn++)
		_putchar(str[strn]);
	_putchar('\n');
}
