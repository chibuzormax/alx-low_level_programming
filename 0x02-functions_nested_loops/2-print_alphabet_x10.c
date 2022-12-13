#include "main.h"

/**
 * print_alphabet_x10 - 10x alphabet printing
 */

void print_alphabet_x10(void)
{
	char lower;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (lower = 0; lower <= 'z'; lower++)
			_putchar(lower);
		_putchar('\n');
	}
}
