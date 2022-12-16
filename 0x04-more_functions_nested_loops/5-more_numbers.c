#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 */

void more_numbers(void)
{
	char c;
	int count = 0;

	while (count++ <= 10)
	{
		for (c = '0'; c <= '14'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
