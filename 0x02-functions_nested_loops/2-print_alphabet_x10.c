#include "main.h"

/**
 * print_alphabet_x10 - 10x alphabet printing
 */

void print_alphabet_x10(void)
{
	char low;
	int count = 0;

	while (count++ <= 9)
	{
		for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	_putchar('\n');
	}
}
