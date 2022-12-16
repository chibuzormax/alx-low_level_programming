#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 */

void more_numbers(void)
{
	int n;
	int count = 0;

	while (count++ <= 9)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar('1');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
